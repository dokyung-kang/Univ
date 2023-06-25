package ddwu.com.mobile.foodexam

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import androidx.recyclerview.widget.LinearLayoutManager
import ddwu.com.mobile.foodexam.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    val TAG = "MainActivity"
    lateinit var binding : ActivityMainBinding
    val foods = FoodDao().foods

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)


        val layoutManager = LinearLayoutManager(this)
        layoutManager.orientation = LinearLayoutManager.VERTICAL

        val adapter = FoodAdapter(foods)
        binding.recyclerView.layoutManager = layoutManager
        binding.recyclerView.adapter = adapter

        // btnAdd를 클릭하면 AddFoodActivity 실행
        val ADD_FOOD_ACTIVITY_CODE = 100

        binding.btnAdd.setOnClickListener{
            val intent = Intent(this, AddFoodActivity::class.java)
            startActivityForResult(intent, ADD_FOOD_ACTIVITY_CODE)
        }

    }
    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)

        when (requestCode){
            100 -> {
                if (resultCode == RESULT_OK){
                    val result = data?.getSerializableExtra("food") as FoodDto

                    val layoutManager = LinearLayoutManager(this)
                    layoutManager.orientation = LinearLayoutManager.VERTICAL

                    val adapter = FoodAdapter(foods)
                    binding.recyclerView.layoutManager = layoutManager
                    binding.recyclerView.adapter = adapter
                    foods.add(result)
                    adapter.notifyDataSetChanged()
                }
            }
        }
    }
}