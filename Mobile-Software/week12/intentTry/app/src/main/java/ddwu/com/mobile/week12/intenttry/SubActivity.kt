package ddwu.com.mobile.week12.intenttry

import android.content.Intent
import android.os.Bundle
import android.os.PersistableBundle
import androidx.appcompat.app.AppCompatActivity
import ddwu.com.mobile.week12.intenttry.databinding.ActivitySubBinding

class SubActivity : AppCompatActivity() {

    lateinit var binding : ActivitySubBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivitySubBinding.inflate(layoutInflater)
        setContentView(binding.root)

        binding.btnClose.setOnClickListener {
            var data = intent.getSerializableExtra("edText")

            val intent = Intent(this, MainActivity::class.java)
            startActivity(intent)
        }
    }
}