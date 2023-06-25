package ddwu.com.mobile.exam02

import android.app.AlertDialog
import android.content.DialogInterface
import android.graphics.Color
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.MotionEvent
import android.view.View
import android.widget.Toast
import ddwu.com.mobile.exam02.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    lateinit var binding : ActivityMainBinding
    val colors = arrayOf<String>("Red", "Cyan", "Blue")
    var selectedIdx = 1

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        binding.myCustomView.setOnLongClickListener{
            AlertDialog.Builder(this).run {
                setTitle("색상 선택")
                setSingleChoiceItems( colors, selectedIdx, object:DialogInterface.OnClickListener {
                    override fun onClick(dialog: DialogInterface?, which: Int) {
                        selectedIdx = which
                    }

                })
                setPositiveButton("확인", object: DialogInterface.OnClickListener {
                    override fun onClick(dialog: DialogInterface?, which: Int) {
                        when (selectedIdx) {
                            0 -> binding.myCustomView.paintColor = Color.RED
                            1 -> binding.myCustomView.paintColor = Color.CYAN
                            2 -> binding.myCustomView.paintColor = Color.BLUE
                        }
                        binding.myCustomView.invalidate()
                    }
                })
                setNegativeButton("취소",null)
                show()
            }
            true
        }



    }


}