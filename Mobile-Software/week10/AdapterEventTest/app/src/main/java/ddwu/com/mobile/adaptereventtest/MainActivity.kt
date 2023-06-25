package ddwu.com.mobile.adaptereventtest

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import androidx.recyclerview.widget.LinearLayoutManager
import ddwu.com.mobile.adaptereventtest.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    lateinit var binding : ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        val dao = SubjectDao()
        val dataList = dao.dataList

        val layoutManager = LinearLayoutManager(this)
        layoutManager.orientation = LinearLayoutManager.VERTICAL    // 생략 가능
        binding.recyclerView.layoutManager = layoutManager

        val adapter = MyAdapter(this, R.layout.list_view, dataList)
        binding.recyclerView.adapter = adapter

        binding.btnAdd.setOnClickListener{
            dataList.add(binding.etText.text.toString())
            adapter.notifyDataSetChanged()

//            binding.btnAdd.setOnClickListener{
//                val str = binding.etText.text
//                dataList.add(str.toString())
//                adapter.notifyDataSetChanged()
//            }
        }
    }
}