package ddwu.com.mobile.fooddbexam

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import androidx.room.Room
import ddwu.com.mobile.fooddbexam.data.Food
import ddwu.com.mobile.fooddbexam.data.FoodDao
import ddwu.com.mobile.fooddbexam.data.FoodDatabase
import ddwu.com.mobile.fooddbexam.databinding.ActivityMainBinding
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.distinctUntilChanged
import kotlinx.coroutines.launch

class MainActivity : AppCompatActivity() {

    val TAG = "MainActivity"

    lateinit var binding : ActivityMainBinding

    lateinit var db : FoodDatabase
    lateinit var foodDao : FoodDao

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

//        db = /*FoodDatabase 생성*/

//        Singleton 패턴 적용 X
        db = Room.databaseBuilder(
            applicationContext, FoodDatabase::class.java, "food_db"
        ).build()

//        Singleton 패턴 적용 O


        foodDao = db.foodDao()

//        showAllFoods()

        binding.btnSelect.setOnClickListener{
            showAllFoods()
//            showFoodByCountry("한국")
        }

        binding.btnAdd.setOnClickListener{
            addFood( Food(0, "된장찌개", "한국") )
        }

        binding.btnUpdate.setOnClickListener{
            modifyFood( Food(1, "김치찌개", "한국") )
        }

        binding.btnRemove.setOnClickListener{
            removeFood( Food(2, null, null) )
        }

    }


    /*각 함수 내부에서 적절한 DAO 호출*/

    fun addFood(food: Food) {
//        실습1
//        Thread {
//            foodDao.insertFood(food)
//        }.start()

//        실습2
        CoroutineScope(Dispatchers.IO).launch {
            foodDao.insertFood(food)
        }
    }

    fun modifyFood(food: Food) {
        CoroutineScope(Dispatchers.IO).launch {
            foodDao.updateFood(food)
        }
    }

    fun removeFood(food: Food) {
        CoroutineScope(Dispatchers.IO).launch {
            foodDao.deleteFood(food)
        }
    }

    fun showFoodByCountry(country: String) {
        CoroutineScope(Dispatchers.IO).launch {
            foodDao.getFoodByCountry(country)
        }
    }

    fun showAllFoods() {
//        교재
//        val foods: List<Food> = foodDao.getAllFoods()
//
//        for(food in foods){
//            Log.d(TAG, food.toString())
//        }

//        실습1
//        Thread {
//            val foods = foodDao.getAllFoods()
//
//            for (food in foods) {
//                Log.d(TAG, food.toString())
//            }
//        }.start()


//        실습2
        CoroutineScope(Dispatchers.IO).launch {
            val flowFoods = foodDao.getAllFoods()

            flowFoods.distinctUntilChanged().collect {
                for (food in it) {
                    Log.d(TAG, food.toString())
                }
            }
        }

    }
}