package ddwu.com.mobile.adaptereventtest

import android.content.Context
import android.util.Log
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import android.widget.Toast
import androidx.recyclerview.widget.RecyclerView

class MyAdapter(val context: Context, val layout: Int, val dataList: ArrayList<String>) : RecyclerView.Adapter<MyAdapter.MyViewHolder>(){

    override fun getItemCount(): Int {
        return dataList.size
    }

    val TAG = "MyAdapter"

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): MyViewHolder {
        Log.d(TAG, "create viewHolder!")
        val view = LayoutInflater.from(context).inflate(layout, parent, false)

        return MyViewHolder(view, dataList, this)
    }

    override fun onBindViewHolder(holder: MyViewHolder, position: Int){
        Log.d(TAG, "bind ViewHolder!")
//        val text = findViewById(R.id.tvText)
//        text.text = dataList[position]
        holder.tvText.text = dataList[position]
    }

    class MyViewHolder(view: View, dataList: ArrayList<String>, adapter: MyAdapter) : RecyclerView.ViewHolder(view){
        val tvText : TextView = view.findViewById(R.id.tvText)
        init {
//            view.setOnClickListener{
//                Toast.makeText(view.context, "${dataList[adapterPosition]} Click!", Toast.LENGTH_SHORT).show()
//            }
            view.setOnLongClickListener {
                dataList.removeAt(adapterPosition)
                adapter.notifyDataSetChanged()
                true
            }
            tvText.setOnClickListener{
                Toast.makeText(view.context, "Hi!", Toast.LENGTH_SHORT).show()
            }
        }
    }
}