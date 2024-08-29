package ddwu.com.mobile.fooddbexam

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
//            deleteFood(removeBinding.etRemoveFood)
        }

    }

    fun deleteFood(id: Int) {  // delete
        val db = helper.writableDatabase
        val whereClause = "id=?"
        val whereArgs = arrayOf(id.toString())
        db.delete("food_table", whereClause, whereArgs)
        helper.close()
    }
}