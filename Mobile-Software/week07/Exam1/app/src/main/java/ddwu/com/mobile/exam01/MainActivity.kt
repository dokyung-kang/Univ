package ddwu.com.mobile.exam01

import android.app.AlertDialog
import android.content.DialogInterface
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import ddwu.com.mobile.exam01.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    lateinit var binding : ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

//        중간 단계 다 건너뛴거
        binding.btnDisplay.setOnClickListener {

//            val text = binding.etText.getText().toString()
            val text = binding.etText.text
//                binding.tvDisplay.setText(binding.etText.getText().toString())

            AlertDialog.Builder(this).run {
                setTitle("입력확인")
                setMessage("$text 를 입력하시겠습니까?")
                setPositiveButton("네", object:DialogInterface.OnClickListener {
                    override fun onClick(p0: DialogInterface?, p1: Int) {
                        binding.tvDisplay.setText(text)
                    }
                })
                setNeutralButton("아니오", null)
                show()
            }
        }
    }


}