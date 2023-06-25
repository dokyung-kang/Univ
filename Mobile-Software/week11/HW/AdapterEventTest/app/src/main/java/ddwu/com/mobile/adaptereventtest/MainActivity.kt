package ddwu.com.mobile.adaptereventtest

import android.app.AlertDialog
import android.content.DialogInterface
import android.graphics.Color
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Toast
import androidx.recyclerview.widget.LinearLayoutManager
import ddwu.com.mobile.adaptereventtest.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    lateinit var binding : ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

//        푸드 예시
        val foods = FoodDao().foods
        val adapter = FoodAdapter(foods)

        val layoutManager = LinearLayoutManager(this)
        layoutManager.orientation = LinearLayoutManager.VERTICAL    // 생략 가능
        binding.recyclerView.layoutManager = layoutManager

        binding.recyclerView.adapter = adapter

//        롱 클릭시
        val itemLongClick = object : FoodAdapter.OnItemLongClickListener {
            override fun onItemLongClick(view: View, position: Int) {
                AlertDialog.Builder(this@MainActivity).run {
                    setTitle("삭제하시겠습니까?")
                    setPositiveButton("확인", object : DialogInterface.OnClickListener{
                        override fun onClick(p0: DialogInterface?, p1: Int) {
                            foods.removeAt(position)
                            adapter.notifyDataSetChanged()
                        }
                    })
                    setNegativeButton("취소", null)
                    show()
                }
            }
        }
        adapter.setOnItemLongClickListener(itemLongClick)
    }
}