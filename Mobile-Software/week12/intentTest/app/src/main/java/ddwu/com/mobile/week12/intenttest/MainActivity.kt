package ddwu.com.mobile.week12.intenttest

import android.content.Intent
import android.net.Uri
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import ddwu.com.mobile.week12.intenttest.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    lateinit var binding : ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        binding.button.setOnClickListener {

            val dto = FoodDto(R.mipmap.ic_launcher, "치킨", 10)

            val intent = Intent(this, DetailActivity::class.java)
//            val intent = Intent(Intent.ACTION_DIAL, Uri.parse("tel:012-3456-7890"))

//            intent.putExtra("greeting", "Hello!!!")
            intent.putExtra("food", dto)
            startActivity(intent)
        }
    }
}