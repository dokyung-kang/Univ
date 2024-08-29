package ddwu.com.mobile.alarmtest

import android.content.BroadcastReceiver
import android.content.Context
import android.content.Intent
import android.widget.Toast
import androidx.core.app.NotificationCompat
import androidx.core.app.NotificationManagerCompat

class MyBroadcastReceiver : BroadcastReceiver(){
    override fun onReceive(context: Context?, intent: Intent?) {
        Toast.makeText(context, "Alarm!!!", Toast.LENGTH_SHORT).show()

        val builder = NotificationCompat.Builder(context!!, context.resources?.getString())
            .setSmallIcon(R.drawable.ic_stat_name)
            .setContentTitle("알림 제목")
            .setContentText("짧은 알림 제목")
            .setStyle(
                NotificationCompat.BigTextStyle()
                .bigText("확장시 확인할 수 있는 긴 알림 내용"))
            // 8.0 이상에서는 대신 Channel 중요도로 서렁
            .setPriority(NotificationCompat.PRIORITY_DEFAULT)
            .setAutoCancel(true)

        val notiManager = NotificationManagerCompat.from(this)
        notiManager.notify(100, builder.build())
    }

}