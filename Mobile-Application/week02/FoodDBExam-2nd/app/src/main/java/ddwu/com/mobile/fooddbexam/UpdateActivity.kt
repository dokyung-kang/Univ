package ddwu.com.mobile.fooddbexam

import android.content.ContentValues
import android.content.Intent
import android.database.sqlite.SQLiteOpenHelper
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.provider.BaseColumns
import ddwu.com.mobile.fooddbexam.databinding.ActivityUpdateBinding

class UpdateActivity : AppCompatActivity() {

    val TAG = "AddActivity"

    lateinit var updateBinding : ActivityUpdateBinding

    lateinit var helper: SQLiteOpenHelper

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        updateBinding = ActivityUpdateBinding.inflate(layoutInflater)
        setContentView(updateBinding.root)

        helper = FoodDBHelper(this)

        updateBinding.btnUpdateFood.setOnClickListener {
            modifyFood(updateBinding.etUpdateId.getText().toString(), updateBinding.etUpdateFood.getText().toString())
            val intent = Intent(this, MainActivity::class.java)
            startActivity(intent)
        }
        updateBinding.btnUpdateCancel.setOnClickListener {
            val intent = Intent(this, MainActivity::class.java)
            startActivity(intent)
        }
    }

    fun modifyFood(id: String, food: String) {  // update
        val db = helper.writableDatabase
        val updateRow = ContentValues()
        updateRow.put("food", food)
        val whereClause = "${BaseColumns._ID}=?"
        val whereArgs = arrayOf(id)
        db.update("food_table", updateRow, whereClause, whereArgs)
        helper.close()
    }
}