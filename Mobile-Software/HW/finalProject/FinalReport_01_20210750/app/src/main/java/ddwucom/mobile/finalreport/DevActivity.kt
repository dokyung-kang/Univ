package ddwucom.mobile.finalreport

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import ddwucom.mobile.finalreport.databinding.ActivityDevBinding

class DevActivity : AppCompatActivity()  {
    lateinit var devBinding : ActivityDevBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        devBinding = ActivityDevBinding.inflate(layoutInflater)
        setContentView(devBinding.root)

        /*버튼 클릭 시 MainActivity로 이동*/
        devBinding.backBtn.setOnClickListener{
            finish()
        }
    }
}