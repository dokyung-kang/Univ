package ddwu.com.mobile.roomexam01

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.View
import androidx.recyclerview.widget.LinearLayoutManager
import ddwu.com.mobile.roomexam01.data.Food
import ddwu.com.mobile.roomexam01.data.FoodDao
import ddwu.com.mobile.roomexam01.data.FoodDatabase
import ddwu.com.mobile.roomexam01.databinding.ActivityMainBinding
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.distinctUntilChanged
import kotlinx.coroutines.launch

class MainActivity : AppCompatActivity() {

    val TAG = "MainActivity"

    lateinit var binding: ActivityMainBinding
    lateinit var foodAdapter: FoodAdapter

    lateinit var db : FoodDatabase
    lateinit var foodDao : FoodDao

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        db = FoodDatabase.getDatabase(this)
        foodDao = db.foodDao()

        /*RecyclerView 의 layoutManager 지정*/
        binding.foodRecyclerView.layoutManager = LinearLayoutManager(this).apply {
            orientation = LinearLayoutManager.VERTICAL
        }

        /*샘플 데이터, DB 사용 시 DB에서 읽어온 데이터로 대체 필요*/
        val foods = ArrayList<Food>()
        foods.add(Food(1,"된장찌개", "한국"))
        foods.add(Food(2,"김치찌개", "한국"))
        foods.add(Food(3,"마라탕", "중국"))
        foods.add(Food(4,"훠궈", "중국"))
        foods.add(Food(5,"스시", "일본"))
        foods.add(Food(6,"오코노미야키", "일본"))

        foodAdapter = FoodAdapter(foods)

        /*foodAdapter 에 LongClickListener 구현 및 설정*/
        val onLongClickListener = object: FoodAdapter.OnItemLongClickListener {
            override fun onItemLongClickListener(view: View, pos: Int) {
                Log.d(TAG, "Long Click!! $pos")
            }
        }
        foodAdapter.setOnItemLongClickListener(onLongClickListener)

        binding.foodRecyclerView.adapter = foodAdapter

        showAllFoods()

        binding.btnShow.setOnClickListener{
            showFoodByCountry(binding.etNation.getText().toString())
        }

        binding.btnInsert.setOnClickListener{
            addFood( Food(0, binding.etFood.getText().toString(), binding.etNation.getText().toString()) )
        }

        binding.btnUpdate.setOnClickListener {
            modifyFood( binding.etFood.getText().toString(), binding.etNation.getText().toString() )
        }

        binding.btnDelete.setOnClickListener {
            removeFood(  binding.etFood.getText().toString() )

        }
    }

    fun addFood(food: Food) {
        CoroutineScope(Dispatchers.IO).launch {
            foodDao.insertFood(food)
        }
    }

    fun modifyFood(foodName: String, country: String) {
        CoroutineScope(Dispatchers.IO).launch {
            foodDao.updateFood(foodName, country)
        }
    }

    fun removeFood(foodName: String) {
        CoroutineScope(Dispatchers.IO).launch {
            foodDao.deleteFood(foodName)
        }
    }

    fun showFoodByCountry(country: String) {
        CoroutineScope(Dispatchers.IO).launch {
            val foods = foodDao.getFoodByCountry(country)
            for (food in foods) {
                Log.d(TAG, food.toString())
            }
        }
    }

    fun showAllFoods() {
        CoroutineScope(Dispatchers.IO).launch {
            val flowFoods: Flow<List<Food>> = foodDao.getAllFoods()
            flowFoods.collect{foods ->
                for (food in foods) {
                    Log.d(TAG, food.toString())
                }
            }
        }
    }
}