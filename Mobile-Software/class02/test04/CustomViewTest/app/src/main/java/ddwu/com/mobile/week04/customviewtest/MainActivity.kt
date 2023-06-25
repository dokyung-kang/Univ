package ddwu.com.mobile.week04.customviewtest

import android.content.Context
import android.graphics.Canvas
import android.graphics.Color
import android.graphics.Paint
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Button

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
//        val myView = MyCustomView(this)
//        setContentView(myView)

        val button = findViewById<Button>(R.id.button)
        val view = findViewById<MyCustomView>(R.id.myCustomView)

        button.setOnClickListener( {
            view.color = Color.YELLOW
            view.invalidate()
        })
    }

//    class MyView(context: Context) : View(context) {
//        override fun onDraw(canvas: Canvas?) {
//            super.onDraw(canvas)
//            canvas?.drawColor(Color.LTGRAY)
//            val paint = Paint()
//            paint.setColor(Color.BLUE)
//            canvas?.drawCircle(200.toFloat(), 200.toFloat(), 100.toFloat(), paint)
//        }
//    }
}