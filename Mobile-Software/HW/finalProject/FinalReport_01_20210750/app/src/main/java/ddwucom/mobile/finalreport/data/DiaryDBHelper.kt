package ddwucom.mobile.finalreport.data

import android.content.Context
import android.database.sqlite.SQLiteDatabase
import android.database.sqlite.SQLiteOpenHelper
import android.provider.BaseColumns
import android.util.Log

class DiaryDBHelper(context: Context?) : SQLiteOpenHelper(context, DB_NAME, null, 1) {
    val TAG = "DiaryDBHelper"

    companion object {
        const val DB_NAME = "diary_db"
        const val TABLE_NAME = "diary_table"
        const val COL_TITLE = "title"
        const val COL_DATE = "date"
        const val COL_WEATHER = "weather"
        const val COL_PLACE = "place"
        const val COL_MUSIC = "music"
        const val COL_STORY = "content"
    }

    override fun onCreate(db: SQLiteDatabase?) {

        val CREATE_TABLE =
            "CREATE TABLE $TABLE_NAME ( ${BaseColumns._ID} INTEGER PRIMARY KEY AUTOINCREMENT, " +
                    "$COL_TITLE TEXT, $COL_DATE TEXT, $COL_WEATHER TEXT, $COL_PLACE TEXT, $COL_MUSIC TEXT, $COL_STORY TEXT )"
        Log.d(TAG, CREATE_TABLE)
        db?.execSQL(CREATE_TABLE)

        /*샘플 데이터*/
        db?.execSQL("INSERT INTO $TABLE_NAME VALUES (NULL, '대학입학', '2021/03/02', '맑음', '대학교', '에이티즈 - wave', '오늘 대학교에 입학했다. 나는 이제 대학생이다.')")
        db?.execSQL("INSERT INTO $TABLE_NAME VALUES (NULL, '동아리 들어감', '2021/12/26', '눈', '대학교', '마마무 - 음오아예', '동아리 들어간다.')")
        db?.execSQL("INSERT INTO $TABLE_NAME VALUES (NULL, '새해', '2022/01/01', '눈', '집', '엑소 - 첫눈', '와 새해다')")
        db?.execSQL("INSERT INTO $TABLE_NAME VALUES (NULL, '와 여름방학이다ㅏㅏㅏㅏ', '2022/06/20', '맑음', '홍대', '에프엑스 - 피노키오', '친구들 만나서 신나게 놀았다.')")
        db?.execSQL("INSERT INTO $TABLE_NAME VALUES (NULL, '동기들이랑 영화봄', '2023/06/20', '비', 'CGV', '세븐틴 - 손오공', '엘리멘탈 봤는데 너무 재밌었다. 원소들의 특징을 창의적으로 잘 살린 것 같다.')")

    }

    override fun onUpgrade(db: SQLiteDatabase?, oldVer: Int, newVer: Int) {
        val DROP_TABLE ="DROP TABLE IF EXISTS $TABLE_NAME"
        db?.execSQL(DROP_TABLE)
        onCreate(db)
    }
}


