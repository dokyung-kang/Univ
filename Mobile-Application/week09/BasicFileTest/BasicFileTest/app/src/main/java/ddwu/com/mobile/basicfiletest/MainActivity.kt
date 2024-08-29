package ddwu.com.mobile.basicfiletest

import android.graphics.BitmapFactory
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import com.bumptech.glide.Glide
import ddwu.com.mobile.basicfiletest.databinding.ActivityMainBinding
import java.io.File

class MainActivity : AppCompatActivity() {
    private val TAG = "MainActivity"

    val mainBinding: ActivityMainBinding by lazy {
        ActivityMainBinding.inflate(layoutInflater)
    }

    val fileManager: FileManager by lazy {
        FileManager(applicationContext)
    }


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(mainBinding.root)

        Log.d(TAG, "Internal filesDir: ${filesDir}")
        Log.d(TAG, "Internal cacheDir: ${cacheDir}")
        Log.d(TAG, "External filesDir: ${getExternalFilesDir(null).toString()}")
        Log.d(TAG, "External cacheDir: ${externalCacheDir}")

        Log.d(TAG, fileManager.getImageFileName(resources.getString(R.string.image_url)))
        Log.d(TAG, "file name: ${fileManager.getCurrentTime()}.jpg")


        mainBinding.btnWrite.setOnClickListener {
            val writeData = mainBinding.etText.text.toString()
            fileManager.writeText("text.txt", writeData)
        }

        mainBinding.btnRead.setOnClickListener {
            val result = fileManager.readText("text.txt")
            mainBinding.etText.setText(result)
        }


        mainBinding.btnReadInternet.setOnClickListener {
            Glide.with(this)
                .load(filesDir.toString()+"/do.jpg")
//                .load("")         // 얜 캐쉬에 저장된 거
                .into(mainBinding.imageView)
        }

        mainBinding.btnWriteImage.setOnClickListener {
            fileManager.writeImage("image.jpg", resources.getString(R.string.image_url))
        }

        mainBinding.btnReadImageFile.setOnClickListener {
            fileManager.readImage("image.jpg",
                mainBinding.imageView)
//            val imageFile = File(filesDir.toString(), "image.jpg")
//            val bitmap = BitmapFactory.decodeFile(imageFile.path)
//            mainBinding.imageView.setImageBitmap(bitmap)
        }

    }


}