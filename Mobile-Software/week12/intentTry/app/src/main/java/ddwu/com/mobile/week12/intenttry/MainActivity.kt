package ddwu.com.mobile.week12.intenttry

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import ddwu.com.mobile.week12.intenttry.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    lateinit var binding : ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        binding.btnGo.setOnClickListener {
            val intent = Intent(this, SubActivity::class.java)

            var edText = binding.edText.text.toString()
            binding.edText.setText(edText)

            intent.putExtra("edText", edText)

            startActivity(intent)
        }
    }
}