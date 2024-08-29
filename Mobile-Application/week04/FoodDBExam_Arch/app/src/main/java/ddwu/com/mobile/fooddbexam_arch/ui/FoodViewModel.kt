package ddwu.com.mobile.fooddbexam_arch.ui

import androidx.lifecycle.LiveData
import androidx.lifecycle.ViewModel
import androidx.lifecycle.ViewModelProvider
import androidx.lifecycle.asLiveData
import androidx.lifecycle.viewModelScope
import ddwu.com.mobile.fooddbexam_arch.data.Food
import ddwu.com.mobile.fooddbexam_arch.data.FoodRepository
import kotlinx.coroutines.launch
import java.lang.IllegalArgumentException

class FoodViewModel(var repository: FoodRepository) : ViewModel() {
    var allFoods : LiveData<List<Food>> = repository.allFoods.asLiveData()

    fun addFood(food: Food) = viewModelScope.launch {
        repository.addFood(food)
    }

    fun modifyFood(food : String, country: String) = viewModelScope.launch {
        repository.modifyFood(food, country)
    }

    fun removeFood(food : String) = viewModelScope.launch {
        repository.removeFood(food)
    }

    fun showFoodByCountry(country: String) = viewModelScope.launch {
        repository.showFoodByCountry(country)
    }
}

class FoodViewModelFactory(private val repository: FoodRepository) : ViewModelProvider.Factory {
    override fun <T : ViewModel> create(modelClass: Class<T>): T {
        if (modelClass.isAssignableFrom(FoodViewModel::class.java)) {
            @Suppress("UNCHECKED_CAST")
            return FoodViewModel(repository) as T
        }
        throw IllegalArgumentException("Unknown ViewModel class")
    }
}