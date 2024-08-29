package ddwu.com.mobile.fooddbexam

import android.annotation.SuppressLint
import android.content.ContentValues
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.provider.BaseColumns
import android.util.Log
import ddwu.com.mobile.fooddbexam.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    val TAG = "MainActivity"

    lateinit var binding : ActivityMainBinding

    lateinit var helper : FoodDBHelper

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        helper = FoodDBHelper(this)

        binding.btnSelect.setOnClickListener{
            showFoods()
        }

        binding.btnAdd.setOnClickListener{
            addFood()
//            addFood("된장찌개", "대한민국")
//            val intent = Intent(this, AddActivity::class.java)
//            startActivity(intent)
        }

        binding.btnUpdate.setOnClickListener{
            modifyFood()
        }

        binding.btnRemove.setOnClickListener{
            deleteFood()
        }

    }

    fun addFood() {     // insert
        val db = helper.writableDatabase
        val newRow = ContentValues()
        newRow.put("food", "바밤바")   // 버튼을 누르면 자신이 좋아하는 음식과 나라명을 DB에 추가
        newRow.put("country", "한국")
        val id = db.insert(FoodDBHelper.TABLE_NAME, null, newRow)
        Log.d(TAG, "new id: $id")
//        db.insert("food_table", null, newRow)
        helper.close()
    }

    fun modifyFood() {  // update
        val db = helper.writableDatabase
        val updateRow = ContentValues()
        updateRow.put("country", "인도")
        updateRow.put("food", "카레")
        val whereClause = "${BaseColumns._ID}=?"
        val whereArgs = arrayOf("1")        // 첫 번째 항목의 음식명과 나라명을 id값을 조건으로 임의의 다른 값으로 변경
        db.update("food_table", updateRow, whereClause, whereArgs)
        helper.close()
    }

    fun deleteFood() {  // delete
        val db = helper.writableDatabase
        val whereClause = "${BaseColumns._ID}=?"
        val whereArgs = arrayOf("1")        // 음식 중 첫 번째 항목을 id 값을 조건으로 삭제
        db.delete("food_table", whereClause, whereArgs)
        helper.close()
    }

    @SuppressLint("Range")
    fun showFoods() {
         val list = ArrayList<FoodDto>()

        val db = helper.readableDatabase
        val columns = null
        val selection = null
        val selectArgs = null
        val cursor = db.query(FoodDBHelper.TABLE_NAME, columns, selection, selectArgs, null, null, null, null)

        with(cursor){
            while (moveToNext()){
                val id = getInt(getColumnIndex(BaseColumns._ID))
                val food = getString(getColumnIndex(FoodDBHelper.COL_FOOD))
                val country = getString(getColumnIndex(FoodDBHelper.COL_COUNTRY))
                val dto = FoodDto(id, food, country)
                list.add(dto)
            }
        }

        cursor.close()
        helper.close()

        var data = ""
        for(dto in list){
            data += dto.toString() + "\n"
        }

        binding.tvDisplay.text = data
    }

}