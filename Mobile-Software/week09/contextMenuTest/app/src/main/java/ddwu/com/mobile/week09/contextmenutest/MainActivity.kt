package ddwu.com.mobile.week09.contextmenutest

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.ContextMenu
import android.view.MenuItem
import android.view.View
import android.widget.TextView
import android.widget.Toast
import ddwu.com.mobile.week09.contextmenutest.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    lateinit var binding : ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
//        setContentView(R.layout.activity_main)

//        setContentView(R.layout.activity_main)
//        val textView = findViewById<TextView>(R.id.textView)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        registerForContextMenu(binding.textView)
    }

    override fun onCreateContextMenu(
        menu: ContextMenu?,
        v: View?,
        menuInfo: ContextMenu.ContextMenuInfo?
    ) {
        menuInflater.inflate(R.menu.menu_context, menu)

        super.onCreateContextMenu(menu, v, menuInfo)
    }

    override fun onContextItemSelected(item: MenuItem): Boolean {
        when(item.itemId){
            R.id.item01 -> Toast.makeText(this, "아이템01", Toast.LENGTH_SHORT).show()
            R.id.item02 -> Toast.makeText(this, "아이템02", Toast.LENGTH_SHORT).show()
        }

        return super.onContextItemSelected(item)
    }
}