package ddwu.com.mobile.fooddbexam

import android.content.ContentValues
import android.content.Intent
import android.database.sqlite.SQLiteOpenHelper
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import ddwu.com.mobile.fooddbexam.databinding.ActivityAddBinding

class AddActivity : AppCompatActivity() {

    val TAG = "AddActivity"

    lateinit var addBinding : ActivityAddBinding

    lateinit var helper: SQLiteOpenHelper

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        addBinding = ActivityAddBinding.inflate(layoutInflater)
        setContentView(addBinding.root)

        helper = FoodDBHelper(this)

        addBinding.btnAddFood.setOnClickListener {
            addFood(addBinding.etAddFood.getText().toString(), addBinding.etAddNation.getText().toString())
            val intent = Intent(this, MainActivity::class.java)
            startActivity(intent)
        }

        addBinding.btnAddCancel.setOnClickListener {
            val intent = Intent(this, MainActivity::class.java)
            startActivity(intent)
        }
    }

    fun addFood(food: String, country: String) {     // insert
        val db = helper.writableDatabase
        val newRow = ContentValues()
        newRow.put(FoodDBHelper.COL_FOOD, food)
        newRow.put(FoodDBHelper.COL_COUNTRY, country)
        val id = db.insert(FoodDBHelper.TABLE_NAME, null, newRow)
        Log.d(TAG, "new id: $id")
//        db.insert("food_table", null, newRow)
        helper.close()
    }
}