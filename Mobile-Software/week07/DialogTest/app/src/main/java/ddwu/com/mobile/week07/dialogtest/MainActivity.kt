package ddwu.com.mobile.week07.dialogtest

import android.app.AlertDialog
import android.app.DatePickerDialog
import android.app.TimePickerDialog
import android.content.DialogInterface
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.widget.DatePicker
import android.widget.TimePicker
import android.widget.Toast
import ddwu.com.mobile.week07.dialogtest.databinding.ActivityMainBinding
import ddwu.com.mobile.week07.dialogtest.databinding.DialogInterfaceBinding
import java.sql.Time
import java.time.DayOfWeek

class MainActivity : AppCompatActivity() {

    lateinit var binding: ActivityMainBinding
    lateinit var dialogBinding: DialogInterfaceBinding

    val items = arrayOf<String>("사과", "복숭아", "배", "딸기")
    var checkedItems = booleanArrayOf(false, false, false, false)
    var selectedIdx = 0

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
//        setContentView(R.layout.activity_main)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        dialogBinding = DialogInterfaceBinding.inflate(layoutInflater)

        binding.button.setOnClickListener {
//            val toast = Toast.makeText(this, "종료하려면 한 번 더 누르세요", Toast.LENGTH_SHORT)
//            toast.show()

//            Toast.makeText(this@MainActivity, "종료하려면 한 번 더 누르세요", Toast.LENGTH_SHORT).show()

//            toast.addCallback( object: Toast.Callback(){
//                override fun onToastShown() {
//                    super.onToastShown()
//                }
//
//                override fun onToastHidden() {
//                    super.onToastHidden()
//                }
//            })

//            DatePickerDialog(this, object: DatePickerDialog.OnDateSetListener {
//                override fun onDateSet(p0: DatePicker?, p1: Int, p2:Int, p3:Int) {
//                    Log.d("kkang", "year: $p1, month: {p2+1}, dayOfMonth: $p3")
//                }
//            }, 2020, 8, 21).show()

//            TimePickerDialog(this, object: TimePickerDialog.OnTimeSetListener {
//                override fun onTimeSet(p0: TimePicker?, p1: Int, p2: Int) {
//                    Log.d("kkang", "time : $p1, minute: $p2")
//                }
//            }, 15, 0, true).show()

//            AlertDialog.Builder(this).run {
//                setTitle("test dialog")
//                setIcon(android.R.drawable.ic_dialog_info)
//                setMessage("정말 종료하시겠습니까?")
////                setPositiveButton("OK", null)
////                setNegativeButton("Cancel", null)
//                setNeutralButton("More", null)
//                setPositiveButton("Yes", null)
//                setNegativeButton("No", null)
//                show()
//            }

//            val builder = AlertDialog.Builder(this)
//            builder.setTitle("Test Dialog")
//            builder.setIcon(android.R.drawable.ic_dialog_info)
//            builder.setMessage("쉬는 시간")
//            builder.setPositiveButton("OK", null)
//            builder.setNegativeButton("Cancel", null)
//            builder.setNeutralButton("More", null)
//            builder.show()

//            AlertDialog.Builder(this).setTitle("Test Dialog")
//                .setIcon(android.R.drawable.ic_dialog_info)
//                .setMessage("쉬는시간??")

            AlertDialog.Builder(this).run {
                setTitle("test dialog")
                setIcon(android.R.drawable.ic_dialog_info)

                setView(dialogBinding.root)

//                setMultiChoiceItems(items, checkedItems, object: DialogInterface.OnMultiChoiceClickListener{
//                    override fun onClick(p0: DialogInterface?, which: Int, isChecked: Boolean) {
//                        Toast.makeText(this@MainActivity, items[which], Toast.LENGTH_SHORT).show()
//                        checkedItems[which] = isChecked
//                    }
//
//                })

//                setItems(items, object: DialogInterface.OnClickListener {
//                    override fun onClick(p0: DialogInterface?, p1: Int) {
//                        Toast.makeText(this@MainActivity, items[p1], Toast.LENGTH_SHORT).show()
//                    }
//                })

//                setSingleChoiceItems(items, selectedIdx, object: DialogInterface.OnClickListener {
//                    override fun onClick(p0: DialogInterface?, p1: Int) {
//                        Toast.makeText(this@MainActivity, items[p1], Toast.LENGTH_SHORT).show()
//                        selectedIdx = p1
//                    }
//                })
//                setPositiveButton("OK", null)
//                setNegativeButton("Cancel", null)
                setCancelable(false)

                setNeutralButton("More", null)
                setPositiveButton("Yes", object: DialogInterface.OnClickListener{
                    override fun onClick(p0: DialogInterface?, p1: Int) {
                        Toast.makeText(this@MainActivity, "OK!!!", Toast.LENGTH_SHORT).show()
                    }
                })
                setNegativeButton("No", null)
                show()
            }

        }

    }
}