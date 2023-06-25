package ddwu.com.mobile.fooddbexam02

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Toast
import androidx.recyclerview.widget.RecyclerView
import ddwu.com.mobile.fooddbexam02.data.FoodDto
import ddwu.com.mobile.fooddbexam02.databinding.ListItemBinding

class FoodAdapter (val foods : ArrayList<FoodDto>)
    : RecyclerView.Adapter<FoodAdapter.FoodViewHolder>() {
    val TAG = "FoodAdapter"

    /*재정의 필수 - 데이터의 개수 확인이 필요할 때 호출*/
    override fun getItemCount(): Int = foods.size

    /*재정의 필수 - 각 item view 의 view holder 생성 시 호출*/
    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): FoodViewHolder {
        val itemBinding = ListItemBinding.inflate(LayoutInflater.from(parent.context), parent, false)

        return FoodViewHolder(itemBinding, listener)
    }

    /*재정의 필수 - 각 item view 의 항목에 데이터 결합 시 호출*/
    override fun onBindViewHolder(holder: FoodViewHolder, position: Int) {
        holder.itemBinding.tvText.text = foods[position].toString()
    }


    class FoodViewHolder(val itemBinding: ListItemBinding, listener: OnItemClickListener?, lcListener: OnItemLongClickListener?)
        : RecyclerView.ViewHolder(itemBinding.root) {
            init {
                /*RecyclerView 항목 클릭 시 외부 click 이벤트 리스너 호출*/
                itemBinding.root.setOnClickListener{
                    listener?.onItemClick(it, adapterPosition)  // RecyclerView 항목 클릭 시 외부에서 지정한 리스너 호출
                }
                itemBinding.root.setOnLongClickListener{
//                    Toast.makeText(it.context, "Long!!!", Toast.LENGTH_SHORT).show()
                    //MainActivity 의 리스너 수행
                    lcListener?.onItemLongClick(it, adapterPosition)
                    true
                }
            }
        }

    interface  OnItemLongClickListener {
        fun onItemLongClick (view: View, position: Int)
    }

    val lcListener : OnItemLongClickListener? = null

    fun setOnItemLongClickListener(listener: OnItemLongClickListener?){
        this.lcListener = listener
    }

    /*사용자 정의 외부 click 이벤트 리스너 설정 */
    var listener : OnItemClickListener? = null  // listener 를 사용하지 않을 때도 있으므로 null

    interface OnItemClickListener {
        fun onItemClick(view : View, position : Int)
    }

    fun setOnItemClickListener(listener: OnItemClickListener?) {
        this.listener = listener
    }
}



