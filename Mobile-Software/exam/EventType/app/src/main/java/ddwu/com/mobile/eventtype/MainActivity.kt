package ddwu.com.mobile.eventtype

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.MotionEvent
import android.view.View
import android.widget.Toast
import ddwu.com.mobile.eventtype.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    val TAG = "MainActivity"    // Log 용 태그
    lateinit var binding : ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
//        setContentView(R.layout.activity_main)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)


    /*이벤트 리스너 사용 방법 실행 시 방법 별로 주석 해제 부분을 바꾸어가며 실행*/

//        이벤트 리스너 사용 방법1의 사용
        val myClick01 = MyClick()
        binding.button.setOnClickListener(myClick01)


//        이벤트 리스너 사용 방법2의 사용
//        binding.button.setOnClickListener(myClick02)


//        이벤트 리스너 사용 방법3 - 인터페이스 생성 객체를 직접 연결
//          binding.button.setOnClickListener(object : View.OnClickListener {
//              override fun onClick(view: View?) {
//                  Log.d(TAG, "Click! with 인터페이스 객체 직접 연결")      // 확인을 위해 하단의 Logcat 창을 확인
//              }
//          })


//        이벤트 리스너 사용 방법 4 - 람다식으로 변환 (SAM - Single Abstract Method) - 추가 후 ( ) 생략
//        binding.button.setOnClickListener {
//            Log.d(TAG, "Click! with SAM")      // 확인을 위해 하단의 Logcat 창을 확인
//        }
    }


//    이벤트 리스너 사용 방법1 - 리스너 인터페이스 구현 클래스 작성
    inner class MyClick : View.OnClickListener {
        override fun onClick(view: View?) {
            Log.d(TAG, "Click! with 인터페이스 구현 클래스")      // 확인을 위해 하단의 Logcat 창을 확인
        }
    }


//    이벤트 리스너 사용 방법2 - 리스너 인터페이스에서 직접 객체 생성
    val myClick02 = object : View.OnClickListener {
        override fun onClick(view: View?) {
            Log.d(TAG, "Click! with 인터페이스에서 직접 객체 생성")      // 확인을 위해 하단의 Logcat 창을 확인
        }
    }


    /*클래스 상속 시 이벤트 메소드 재정의를 사용 - 화면을 터치할 경우 실행*/
    override fun onTouchEvent(event: MotionEvent?): Boolean {
        Toast.makeText(this@MainActivity, "상속 메소드 재정의!!", Toast.LENGTH_SHORT).show()
        return true
    }

    
    /*레이아웃 xml 의 onClick 속성에서 이벤트 메소드 지정 - LAYOUT ONCLICK 버튼 클릭 시 실행*/
    fun onMyClick(view: View?) {
        Toast.makeText(this@MainActivity, "Layout XML 속성 지정!!", Toast.LENGTH_SHORT).show()
    }


}