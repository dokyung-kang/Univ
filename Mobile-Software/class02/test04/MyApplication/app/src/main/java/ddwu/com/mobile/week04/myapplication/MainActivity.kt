package ddwu.com.mobile.week04.myapplication

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView
import org.w3c.dom.Text

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
//        setContentView(R.layout.activity_main)
        val textView : TextView = TextView(this)
        textView.setText("코드로 문자열 출력")
        setContentView((textView))
    }
}