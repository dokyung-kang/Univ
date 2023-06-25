package ddwu.com.mobile.adaptereventtest

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import ddwu.com.mobile.adaptereventtest.databinding.ListItemBinding
import org.w3c.dom.Text

class FoodAdapter(val foods : ArrayList<FoodDto>)
    : RecyclerView.Adapter<FoodAdapter.FoodViewHolder>(){

//    롱 클릭시 삭제
    interface OnItemLongClickListener {
        fun onItemLongClick(view: View, position: Int)
    }
    lateinit var listener2: OnItemLongClickListener
    fun setOnItemLongClickListener(listener: OnItemLongClickListener){
        this.listener2 = listener
    }

//    축약형
    override fun getItemCount() = foods.size

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): FoodViewHolder {
        val itemBinding = ListItemBinding.inflate(LayoutInflater.from(parent.context), parent, false)
        return FoodViewHolder(itemBinding, listener2)
    }

    override fun onBindViewHolder(holder: FoodViewHolder, position: Int) {
        holder.itemBinding.ivPhoto.setImageResource(foods[position].photo)
        holder.itemBinding.tvFood.text = foods[position].food
        holder.itemBinding.tvCount.text = foods[position].count.toString()
    }

    class FoodViewHolder(val itemBinding: ListItemBinding, /*val listener: OnItemLongClickListener*/ val listener: OnItemLongClickListener)
        : RecyclerView.ViewHolder(itemBinding.root) {
        init {
//            롱 클릭
            itemBinding.root.setOnLongClickListener{
                listener.onItemLongClick(it, adapterPosition)
                true
            }
        }
    }

}