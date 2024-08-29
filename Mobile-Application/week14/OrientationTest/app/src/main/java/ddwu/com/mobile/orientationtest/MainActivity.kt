package ddwu.com.mobile.orientationtest

import android.content.Context
import android.hardware.Sensor
import android.hardware.SensorEvent
import android.hardware.SensorEventListener
import android.hardware.SensorManager
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import ddwu.com.mobile.orientationtest.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    val mainBinding by lazy {
        ActivityMainBinding.inflate(layoutInflater)
    }

    val sensorManager by lazy {
        getSystemService(Context.SENSOR_SERVICE) as SensorManager
    }

    lateinit var accelerometer: Sensor
    lateinit var magnetomter: Sensor

    val mAccReading = FloatArray(3)
    val mMagnetReading = FloatArray(3)

    val sensorListener = object : SensorEventListener{
        override fun onSensorChanged(event: SensorEvent?) {

        }

        override fun onAccuracyChanged(sensor: Sensor?, accuracy: Int) {
            TODO("Not yet implemented")
        }

    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(mainBinding.root)

        accelerometer = sensorManager.getDefaultSensor(Sensor.TYPE_ACCELEROMETER)
        magnetomter = sensorManager.getDefaultSensor(Sensor.TYPE_MAGNETIC_FIELD)

        mainBinding.btnStart.setOnClickListener {
            sensorManager.registerListener(sensorListener,
                accelerometer, SensorManager.SENSOR_DELAY_UI)

            sensorManager.registerListener(sensorListener,
                magnetomter, SensorManager.SENSOR_DELAY_UI)
        }

        mainBinding.btnStop.setOnClickListener {
            sensorManager.unregisterListener(sensorListener)
        }

    }



    override fun onPause() {
        super.onPause()
        sensorManager.unregisterListener(sensorListener)
    }



    fun showData(data: String) {
        val text = mainBinding.tvDisplay.text.toString()
        mainBinding.tvDisplay.setText("${text}\n${data}")
    }
}