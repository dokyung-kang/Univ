package ddwu.com.mobile.week10.exam01

import android.content.Context
import android.util.Log
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView

class MyAdapter (val context: Context, val layout: Int, val dataList: ArrayList<String>) : RecyclerView.Adapter<MyAdapter.MyViewHolder>(){
    override fun getItemCount(): Int {
        return dataList.size
    }

    val TAG = "MyAdapter"

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): MyViewHolder {
        Log.d(TAG, "create viewHolder!")
        val view = LayoutInflater.from(context).inflate(layout, parent, false)
        return MyViewHolder(view)
    }

    override fun onBindViewHolder(holder: MyViewHolder, position: Int){
        Log.d(TAG, "bind ViewHolder!")
//        val text = findViewById(R.id.tvText)
//        text.text = dataList[position]
        holder.catText.text = dataList[position]
    }

    class MyViewHolder(view: View) : RecyclerView.ViewHolder(view){
        val catText : TextView = view.findViewById(R.id.catText)
    }
}