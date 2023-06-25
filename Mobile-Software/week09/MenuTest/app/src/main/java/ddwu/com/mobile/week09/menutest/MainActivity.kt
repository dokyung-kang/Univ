package ddwu.com.mobile.week09.menutest

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
//        val menuItem1: MenuItem? = menu?.add(0, 0, 0, "menu1")
//        val menuItem2: MenuItem? = menu?.add(0, 1, 0, "menu2")

        menuInflater.inflate(R.menu.menu_main, menu)
        return super.onCreateOptionsMenu(menu)


    }

    val TAG = "MainActivity"

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        when(item.itemId) {
            R.id.item01 ->  Log.d(TAG, "item01!")
                R.id.subItem01 -> Log.d(TAG, "subItem01!")
            R.id.subItem02 -> Log.d(TAG, "subItem02!")
        }


        return super.onOptionsItemSelected(item)

    }

    fun onMenuClick(item: MenuItem){
        Toast.makeText(this, "menu!", Toast.LENGTH_SHORT).show()
    }
}