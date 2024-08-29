package ddwu.com.mobile.naverretrofittest

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.bumptech.glide.Glide
import ddwu.com.mobile.naverretrofittest.databinding.ActivityDetailBinding
import java.text.SimpleDateFormat
import java.util.Date

class DetailActivity : AppCompatActivity() {
    val detailBinding by lazy {
        ActivityDetailBinding.inflate(layoutInflater)
    }

    val fileManager: FileManager by lazy {
        FileManager(applicationContext)
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(detailBinding.root)

        val url = intent.getStringExtra("url")

        val imageName = getImageFileName(getCurrentTime())

        detailBinding.btnSave.setOnClickListener {
            fileManager.writeImage(imageName, url!!)
        }

        detailBinding.btnRead.setOnClickListener {
            fileManager.readImage(imageName, detailBinding.imgBookCover)
        }

        detailBinding.btnInit.setOnClickListener {
            detailBinding.imgBookCover.setImageResource(R.mipmap.ic_launcher)
        }

        detailBinding.btnRemove.setOnClickListener {
            fileManager.deleteImage(imageName)
        }
    }

    fun getImageFileName(path: String) : String {
        val fileName = path.slice(IntRange( path.lastIndexOf("/")+1, path.length-1))+".jpg"
        return fileName
    }

    fun getCurrentTime() : String {
        return SimpleDateFormat("yyyyMMdd_HHmmss").format(Date())
    }
}