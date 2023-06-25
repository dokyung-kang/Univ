package ddwu.com.mobile.week12.intenttest

import android.os.Build
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import androidx.annotation.RequiresApi
import ddwu.com.mobile.week12.intenttest.databinding.ActivityDetailBinding

class DetailActivity : AppCompatActivity() {

    lateinit var binding : ActivityDetailBinding

    @RequiresApi(Build.VERSION_CODES.TIRAMISU)
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityDetailBinding.inflate(layoutInflater)
        setContentView(binding.root)

//        val str = intent.getStringExtra("greeting")

//        val str = intent.getSerializableExtra("food", FoodDto::class.java)
//        binding.tvDetail.text = str.toString()

        binding.btnOk.setOnClickListener{
            val resultIntent = Intent()
            resultIntent.putExtra("result_data", "DetailActivity!!!")
            setResult()
        }
    }
}