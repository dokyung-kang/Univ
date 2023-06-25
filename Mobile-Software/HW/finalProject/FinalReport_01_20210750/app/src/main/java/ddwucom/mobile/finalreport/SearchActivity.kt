package ddwucom.mobile.finalreport

import android.os.Bundle
import android.provider.BaseColumns
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import ddwucom.mobile.finalreport.data.DiaryDBHelper
import ddwucom.mobile.finalreport.databinding.ActivitySearchBinding

class SearchActivity : AppCompatActivity() {
    val TAG = "AddActivity"

    lateinit var searchBinding : ActivitySearchBinding
    lateinit var searchText : String

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        searchBinding = ActivitySearchBinding.inflate(layoutInflater)
        setContentView(searchBinding.root)

        /*검색 버튼 클릭 시*/
        searchBinding.searchBtn.setOnClickListener{
            searchText = searchBinding.edSearch.text.toString()     // 입력한 주제

            val helper = DiaryDBHelper(this)
            val db = helper.readableDatabase
            val cursor = db.query(DiaryDBHelper.TABLE_NAME, null, null, null, null, null, null)

            var found = 0

            with (cursor) {
                while (moveToNext()) {
                    val title = getString( getColumnIndex(DiaryDBHelper.COL_TITLE) )
                    /*해당 주제 있으면 화면에 출력*/
                    if (searchText.equals(title)) {
                        searchBinding.etFindTitle.setText(title)
                        searchBinding.etFindId.setText(getInt( getColumnIndex(BaseColumns._ID)).toString())
                        searchBinding.etFindDate.setText(getString(getColumnIndex(DiaryDBHelper.COL_DATE)))
                        searchBinding.etFindWeather.setText(getString(getColumnIndex(DiaryDBHelper.COL_WEATHER)))
                        searchBinding.etFindPlace.setText(getString(getColumnIndex(DiaryDBHelper.COL_PLACE)))
                        searchBinding.etFindMusic.setText(getString(getColumnIndex(DiaryDBHelper.COL_MUSIC)))
                        searchBinding.etFindContent.setText(getString(getColumnIndex(DiaryDBHelper.COL_STORY)))
                        found = 1
                        break
                    }
                }
            }
            if (found != 1) {
                /*주제 없으면 초기화*/
                searchBinding.etFindTitle.setText("")
                searchBinding.etFindId.setText("")
                searchBinding.etFindDate.setText("")
                searchBinding.etFindWeather.setText("")
                searchBinding.etFindPlace.setText("")
                searchBinding.etFindMusic.setText("")
                searchBinding.etFindContent.setText("")
                Toast.makeText(this@SearchActivity, "리스트에 없는 주제입니다.", Toast.LENGTH_SHORT).show()
            }

            cursor.close()      // cursor 사용을 종료
            helper.close()      // DB 사용이 끝

        }

        /*버튼 클릭 시 MainActivity로 이동*/
        searchBinding.returnBtn.setOnClickListener{
            finish()
        }
    }
}