package ddwu.com.mobile.adaptereventtest

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

//        val dao = SubjectDao()
//        val dataList = dao.dataList

//        푸드 예시
        val foods = FoodDao().foods
        val adapter = FoodAdapter(foods)

//        실습
//        val weathers = WeatherDao().weathers
//        val adapter = CustomAdapter(weathers)

        val layoutManager = LinearLayoutManager(this)
        layoutManager.orientation = LinearLayoutManager.VERTICAL    // 생략 가능
        binding.recyclerView.layoutManager = layoutManager

//        val adapter = MyAdapter(this, R.layout.list_view, dataList)
        binding.recyclerView.adapter = adapter

//        binding.btnAdd.setOnClickListener{
//            dataList.add(binding.etText.text.toString())
//            adapter.notifyDataSetChanged()
//        }

//        val click = object : View.OnClickListener {
//            override fun onClick(v: View?){
//                Toast.makeText(this@MainActivity, "Click", Toast.LENGTH_SHORT).show()
//            }
//        }
//        binding.btnAdd.setOnClickListener(click)

//        일반 클릭시
//        val itemClick = object : FoodAdapter.OnItemClickListener {
//            override fun onItemClick(view: View, position: Int) {
//                Toast.makeText(this@MainActivity, "${foods[position]}", Toast.LENGTH_SHORT).show()
//            }
//        }
//        adapter.setOnItemClickListener(itemClick)

//        롱 클릭시
        val itemLongClick = object : FoodAdapter.OnItemLongClickListener {
            override fun onItemLongClick(view: View, position: Int) {
//                Toast.makeText(this@MainActivity, "${foods[position]}", Toast.LENGTH_SHORT).show()

                foods.removeAt(position)
                adapter.notifyDataSetChanged()
            }
        }
        adapter.setOnItemLongClickListener(itemLongClick)
    }
}