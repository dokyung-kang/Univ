package ddwu.com.mobile.exam02

import android.graphics.Color
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.*
import android.widget.Toast
import ddwu.com.mobile.exam02.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    lateinit var binding : ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        registerForContextMenu(binding.myCustomView)
    }

    override fun onCreateContextMenu(
        menu: ContextMenu?,
        v: View?,
        menuInfo: ContextMenu.ContextMenuInfo?
    ) {
        menuInflater.inflate(R.menu.context_menu, menu)
        super.onCreateContextMenu(menu, v, menuInfo)
    }

    override fun onCreateOptionsMenu(menu: Menu?): Boolean {
        menuInflater.inflate(R.menu.option_menu, menu)
        return super.onCreateOptionsMenu(menu)
    }

    override fun onContextItemSelected(item: MenuItem): Boolean {
        when(item.itemId){
            R.id.red_item -> binding.myCustomView.paintColor = Color.RED
            R.id.green_item -> binding.myCustomView.paintColor = Color.GREEN
            R.id.blue_item -> binding.myCustomView.paintColor = Color.BLUE
            R.id.bigger ->  binding.myCustomView.r = binding.myCustomView.r + 50f
            R.id.smaller -> binding.myCustomView.r = binding.myCustomView.r - 50f
        }
        binding.myCustomView.invalidate()
        return super.onContextItemSelected(item)
    }

//    override fun onOptionsItemSelected(item: MenuItem): Boolean {
//        when(item.itemId) {
//            R.id.bigger ->  binding.myCustomView.r = binding.myCustomView.r + 50f
//            R.id.smaller -> binding.myCustomView.r = binding.myCustomView.r - 50f
//        }
//        binding.myCustomView.invalidate()
//        return super.onOptionsItemSelected(item)
//    }


}