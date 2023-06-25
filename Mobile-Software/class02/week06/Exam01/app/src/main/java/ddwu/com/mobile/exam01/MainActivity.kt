package ddwu.com.mobile.exam01

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

//        방법 1
        binding.btnDisplay.setOnClickListener(MyClick())

//        중간 단계 다 건너뛴거
        binding.btnDisplay.setOnClickListener {
                binding.tvDisplay.setText(binding.etText.getText().toString())
        }
    }

    var click = object : View.OnClickListener {
        override fun onClick(p0: View?) {
            binding.tvDisplay.setText(binding.etText.getText().toString())
        }

    }

//    방법 1
    inner class MyClick : View.OnClickListener {
        override fun onClick(p0: View?) {
            var str = binding.etText.getText().toString()
            binding.tvDisplay.setText(str)
        }

    }
}