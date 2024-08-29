package ddwu.com.mobile.fooddbexam

import android.content.Intent
import android.database.sqlite.SQLiteOpenHelper
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import ddwu.com.mobile.fooddbexam.databinding.ActivityRemoveBinding

class RemoveActivity : AppCompatActivity() {

    val TAG = "RemoveActivity"

    lateinit var removeBinding : ActivityRemoveBinding

    lateinit var helper: SQLiteOpenHelper

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        removeBinding = ActivityRemoveBinding.inflate(layoutInflater)
        setContentView(removeBinding.root)

        helper = FoodDBHelper(this)

        removeBinding.btnRemoveFood.setOnClickListener {
            deleteFood(removeBinding.etRemoveFood.getText().toString())
            val intent = Intent(this, MainActivity::class.java)
            startActivity(intent)
        }
        removeBinding.btnRemoveCancel.setOnClickListener {
            val intent = Intent(this, MainActivity::class.java)
            startActivity(intent)
        }
    }

    fun deleteFood(food: String) {  // delete
        val db = helper.writableDatabase
        val whereClause = "food=?"
        val whereArgs = arrayOf(food)
        db.delete("food_table", whereClause, whereArgs)
        helper.close()
    }
}