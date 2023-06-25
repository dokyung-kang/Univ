package ddwu.com.mobile.week06.touchtest

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.MotionEvent
import android.view.View
import android.widget.Toast
import ddwu.com.mobile.week06.touchtest.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    val TAG = "MainActivity"

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        //setContentView(R.layout.activity_main)
        val binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

//        val clickEvent = ClickEvent()

        binding.button.setOnClickListener(ClickEvent())
//        binding.button.setOnClickListener()

        val myTouch = MyTouch()
//        binding.button.setOnTouchListener(myTouch)
    }

    // 이벤트 리스너
    inner class ClickEvent : View.OnClickListener { //view 내부에 있는 인터페이스임
        // 이벤트 핸들러
        override fun onClick(view: View?) {
            Toast.makeText(this@MainActivity,
                "Click!!!", Toast.LENGTH_SHORT).show()
        }
    }

    fun onMyClick(view: View?){
        Toast.makeText(this, "On My Click!", Toast.LENGTH_SHORT).show()
    }

    inner class MyTouch : View.OnTouchListener{
        override fun onTouch(p0: View?, p1: MotionEvent?): Boolean {
            Log.d(TAG, "Touch")
            return true
        }

    }

//    inner class LongClickEvent : View.OnLongClickListener {
//        override fun onLongClick(p0: View?): Boolean {
//            Toast.makeText(this@MainActivity,
//                "Click!!!", Toast.LENGTH_SHORT).show()
//        }
//    }

//    override fun onTouchEvent(event: MotionEvent?): Boolean {
//        when(event?.action) {
//            MotionEvent.ACTION_DOWN ->
//                Toast.makeText(this, "Down!", Toast.LENGTH_SHORT).show()
//            MotionEvent.ACTION_UP ->
//                Toast.makeText(this, "Up!", Toast.LENGTH_SHORT).show()
//
//        }
//        return super.onTouchEvent(event)
//    }
}