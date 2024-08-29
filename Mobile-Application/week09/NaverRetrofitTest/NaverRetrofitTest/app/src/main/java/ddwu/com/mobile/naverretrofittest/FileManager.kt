package ddwu.com.mobile.naverretrofittest

import android.content.Context
import android.graphics.Bitmap
import android.graphics.drawable.Drawable
import android.os.Environment
import android.widget.ImageView
import com.bumptech.glide.Glide
import com.bumptech.glide.request.target.CustomTarget
import com.bumptech.glide.request.transition.Transition
import java.text.SimpleDateFormat
import java.util.Date

class FileManager(val context: Context) {
    val TAG = "FileManager"

    fun writeImage(fileName: String, imageUrl: String) {
        Glide.with(context)
            .asBitmap()
            .load(imageUrl)
            .into( object: CustomTarget<Bitmap>(350, 350){
                override fun onResourceReady(resource: Bitmap, transition: Transition<in Bitmap>?) {
                    context.openFileOutput(fileName, Context.MODE_PRIVATE).use{
                        resource.compress(Bitmap.CompressFormat.JPEG, 100, it)
                    }
                }

                override fun onLoadCleared(placeholder: Drawable?) {

                }

            }

            )
    }

    fun readImage(fileName: String, view: ImageView) {
        Glide.with(context)
            .load(context.filesDir.path+"/${fileName}")
            .into(view)

    }

    fun deleteImage(fileName: String){
        context.deleteFile(fileName)
    }

    // Checks if a volume containing external storage is available
    // for read and write.
    fun isExternalStorageWritable(): Boolean {
        return Environment.getExternalStorageState() == Environment.MEDIA_MOUNTED
    }

    // Checks if a volume containing external storage is available to at least read.
    fun isExternalStorageReadable(): Boolean {
        return Environment.getExternalStorageState() in
                setOf(Environment.MEDIA_MOUNTED, Environment.MEDIA_MOUNTED_READ_ONLY)
    }

    fun getImageFileName(path: String) : String {
        val fileName = path.slice(IntRange( path.lastIndexOf("/")+1, path.length-1))
        return fileName
    }

    fun getCurrentTime() : String {
        return SimpleDateFormat("yyyyMMdd_HHmmss").format(Date())
    }
}