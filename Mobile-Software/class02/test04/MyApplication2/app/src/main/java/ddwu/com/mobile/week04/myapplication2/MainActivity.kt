package ddwu.com.mobile.week04.myapplication2

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import android.widget.Toast

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_linear)

        val textView : TextView = findViewById(R.id.textView)
        textView.setText("안녕")

        val btnFirst = findViewById<Button>(R.id.btnFirst)
        val btnSecond = findViewById<Button>(R.id.btnSecond)
        val textView2 = findViewById<TextView>(R.id.textView2)

        val etText = findViewById<EditText>(R.id.etText)


        btnFirst.setOnClickListener {
//            btnSecond.visibility = View.INVISIBLE
            val text = etText.getText().toString()
            Toast.makeText(this, text,Toast.LENGTH_SHORT).show()
            textView2.setText("text")

        }


    }
}