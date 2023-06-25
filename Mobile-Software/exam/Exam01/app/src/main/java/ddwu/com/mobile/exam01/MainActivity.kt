package ddwu.com.mobile.exam01

import android.app.AlertDialog
import android.content.DialogInterface
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import ddwu.com.mobile.exam01.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    lateinit var binding : ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        binding.btnDisplay.setOnClickListener {

//            val text = binding.etText.getText().toString()
            val text = binding.etText.text

            AlertDialog.Builder(this).run{
                setTitle("입력 확인")
                setMessage("$text 를 입력하시겠습니까?")
                setPositiveButton("네", object:DialogInterface.OnClickListener {
                    override fun onClick(dialog: DialogInterface?, which: Int) {
                        binding.tvDisplay.setText(text)
                    }
                })
                setNegativeButton("아니오", null)
                show()
            }
        }
    }




}