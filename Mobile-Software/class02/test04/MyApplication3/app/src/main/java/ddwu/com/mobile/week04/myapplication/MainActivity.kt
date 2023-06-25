package ddwu.com.mobile.week04.myapplication

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView
import ddwu.com.mobile.week04.myapplication.databinding.ActivityLinearBinding
import ddwu.com.mobile.week04.myapplication.databinding.ActivityMainBinding
import ddwu.com.mobile.week04.myapplication.databinding.ActivityRelativeBinding

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

//        setContentView(R.layout.activity_main)
//        val textView = findViewById<TextView>(R.id.textView)
//        textView.setText("Mobile Software")

        val binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)


    }
}