package ddwu.com.mobile.fooddbexam_arch.data

import kotlinx.coroutines.flow.Flow

class FoodRepository (private val foodDao: FoodDao) {
    val allFoods : Flow<List<Food>> = foodDao.getAllFoods()

    suspend fun addFood(food: Food) {
        foodDao.insertFood(food)
    }

    suspend fun modifyFood(food : String, country: String) {
        foodDao.updateFood(food, country)
    }

    suspend fun removeFood(food : String) {
        foodDao.deleteFood(food)
    }

    suspend fun showFoodByCountry(country: String) {
        foodDao.getFoodByCountry(country)
    }
}