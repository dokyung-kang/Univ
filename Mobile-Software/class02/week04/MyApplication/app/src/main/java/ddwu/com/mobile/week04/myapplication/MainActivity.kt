package ddwu.com.mobile.week04.myapplication

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import android.widget.Toast

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_linear)

        val edName = findViewById<TextView>(R.id.edName)
        val edPhone = findViewById<TextView>(R.id.edPhone)
        val btnHello = findViewById<Button>(R.id.btnHello)
        val btnExit = findViewById<Button>(R.id.btnExit)


        btnHello.setOnClickListener {
            val text = "안녕하세요. 저는 " + edName.getText().toString() + "입니다. \n" + "전화번호는 " + edPhone.getText().toString() + " 입니다."
            Toast.makeText(this, text, Toast.LENGTH_SHORT).show()

        }
        btnExit.setOnClickListener {
            finish()
        }
    }
}