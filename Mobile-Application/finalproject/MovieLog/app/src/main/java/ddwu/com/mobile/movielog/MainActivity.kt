package ddwu.com.mobile.movielog

import android.content.Intent
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import ddwu.com.mobile.movielog.databinding.ActivityMainBinding

class MainActivity: AppCompatActivity() {
    private val TAG = "MainActivity"

    lateinit var mainBinding : ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        mainBinding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(mainBinding.root)

        mainBinding.diaryBtn.setOnClickListener {
            var intent = Intent(this, DiaryActivity::class.java)
            startActivity(intent)
        }

        mainBinding.movieBtn.setOnClickListener {
            var intent = Intent(this, SearchActivity::class.java)
            startActivity(intent)
        }

        mainBinding.cinemaBtn.setOnClickListener {
            var intent = Intent(this, MapActivity::class.java)
            startActivity(intent)
        }

    }
}