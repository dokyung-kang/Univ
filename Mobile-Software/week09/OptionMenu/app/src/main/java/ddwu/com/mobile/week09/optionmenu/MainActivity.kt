package ddwu.com.mobile.week09.optionmenu

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.Menu
import android.view.MenuItem
import android.widget.Toast

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
    }

    override fun onCreateOptionsMenu(menu: Menu?): Boolean {
        menuInflater.inflate(R.menu.menu_main, menu)
        return super.onCreateOptionsMenu(menu)


    }

    val TAG = "MainActivity"

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        when(item.itemId) {
            R.id.item01 ->  Log.d(TAG, "item01!")
            R.id.item02 ->  Log.d(TAG, "item02!")
            R.id.subItem01 -> Toast.makeText(this, "맛있음", Toast.LENGTH_SHORT).show()
            R.id.subItem02 -> Log.d(TAG, "subItem02!")
            R.id.subItem03 -> Log.d(TAG, "subItem03!")
            R.id.subItem04 -> Log.d(TAG, "subItem04!")
        }


        return super.onOptionsItemSelected(item)

    }

//    fun onMenuClick(item: MenuItem){
//        Toast.makeText(this, "$item 맛있어요!", Toast.LENGTH_SHORT).show()
//    }
}