package ddwu.com.mobile.lbstest

import android.Manifest.permission.ACCESS_COARSE_LOCATION
import android.Manifest.permission.ACCESS_FINE_LOCATION
import android.annotation.SuppressLint
import android.content.Intent
import android.content.pm.PackageManager
import android.location.Address
import android.location.Geocoder
import android.location.Location
import android.net.Uri
import android.os.Build
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.Looper
import android.util.Log
import androidx.activity.result.contract.ActivityResultContracts
import com.google.android.gms.location.FusedLocationProviderClient
import com.google.android.gms.location.LocationCallback
import com.google.android.gms.location.LocationRequest
import com.google.android.gms.location.LocationResult
import com.google.android.gms.location.LocationServices
import com.google.android.gms.location.Priority
import ddwu.com.mobile.lbstest.databinding.ActivityMainBinding
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import java.lang.Exception
import java.util.Locale

class MainActivity : AppCompatActivity() {

    private val TAG = "MainActivity"

    val mainBinding by lazy {
        ActivityMainBinding.inflate(layoutInflater)
    }
    private lateinit var fusedLocationClient : FusedLocationProviderClient
    private lateinit var geocoder : Geocoder
    private lateinit var currentLoc : Location

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(mainBinding.root)

        fusedLocationClient = LocationServices.getFusedLocationProviderClient(this)

        geocoder = Geocoder(this, Locale.getDefault())


        mainBinding.btnPermit.setOnClickListener {
            checkPermissions ()
        }

        mainBinding.btnLastLoc.setOnClickListener {
            getLastLocation()
//            callExternalMap()
        }


        mainBinding.btnLocStart.setOnClickListener {
            startLocUpdates()
        }

        mainBinding.btnLocStop.setOnClickListener {
            fusedLocationClient.removeLocationUpdates(locCallback)
        }

        mainBinding.btnLocTitle.setOnClickListener {
            getLastLocation()
            callExternalMap()
        }

        showData("Geocoder isEnabled: ${Geocoder.isPresent()}")
    }


    override fun onPause() {
        super.onPause()
        fusedLocationClient.removeLocationUpdates(locCallback)
    }


    fun checkPermissions () {
        if (checkSelfPermission(ACCESS_FINE_LOCATION)
                == PackageManager.PERMISSION_GRANTED
            && checkSelfPermission(ACCESS_COARSE_LOCATION)
                == PackageManager.PERMISSION_GRANTED) {
            showData("Permissions are already granted")  // textView에 출력
        } else {
            locationPermissionRequest.launch(arrayOf(
                ACCESS_FINE_LOCATION,
                ACCESS_COARSE_LOCATION))
        }
    }

    /*registerForActivityResult 는 startActivityForResult() 대체*/
    val locationPermissionRequest
        = registerForActivityResult( ActivityResultContracts.RequestMultiplePermissions() ) {
            permissions ->
                when {
                    permissions.getOrDefault(ACCESS_FINE_LOCATION, false) -> {
                        showData("FINE_LOCATION is granted")
                    }
                    permissions.getOrDefault(ACCESS_COARSE_LOCATION, false) -> {
                        showData("COARSE_LOCATION is granted")
                    }
                    else -> {
                        showData("Location permissions are required")
                    }
                }
        }


    val locCallback : LocationCallback
            = object : LocationCallback() {
        override fun onLocationResult(locResult: LocationResult) {
            val currentLoc : Location = locResult.locations[0]
            
            // 위치가 바뀔 때마다 현재의 위도/경도 확인 후 이를 Geocoding을 통해 주소로 바꾸어 출력
            geocoder.getFromLocation(currentLoc.latitude, currentLoc.longitude, 5){
                    addresses ->
                CoroutineScope(Dispatchers.Main).launch {
                    showData(addresses.get(0).getAddressLine(0).toString())
                }
            }
//            showData("위도: ${currentLoc.latitude}, 경도: ${currentLoc.longitude}")
        }
    }



    val locRequest : LocationRequest = LocationRequest.Builder(10000)
        .setMinUpdateIntervalMillis(5000)
        .setPriority(Priority.PRIORITY_BALANCED_POWER_ACCURACY)
        .build()



    @SuppressLint("MissingPermission")
    private fun startLocUpdates() {
        fusedLocationClient.requestLocationUpdates(
            locRequest,
            locCallback,
            Looper.getMainLooper()
        )
    }

    @SuppressLint("MissingPermission")
    private fun getLastLocation() {
        fusedLocationClient.lastLocation.addOnSuccessListener { location: Location? ->
            if (location != null){
                showData(location.toString())
            }
        }
        fusedLocationClient.lastLocation.addOnFailureListener{
            e: Exception ->
            Log.d(TAG, e.toString())
        }

        geocoder.getFromLocation(37.505816, 127.042383, 5){
            addresses ->
            CoroutineScope(Dispatchers.Main).launch {
                showData(addresses.get(0).toString())
            }
        }
    }


    fun callExternalMap() {
        val locLatLng   // 위도/경도 정보로 지도 요청 시
                = String.format("geo:%f,%f?z=%d", 37.606320, 127.041808, 17)
        val locName     // 위치명으로 지도 요청 시
                = "https://www.google.co.kr/maps/place/" + "Hawolgok-dong"
        val route       // 출발-도착 정보 요청 시
            = String.format("https://www.google.co.kr/maps?saddr=%f,%f&daddr=%f,%f",
                            37.606320, 127.041808, 37.601925, 127.041530)
        val uri = Uri.parse(route)
        val intent = Intent(Intent.ACTION_VIEW, uri)
        startActivity(intent)
    }


    private fun showData(data : String) {
        mainBinding.tvData.setText(mainBinding.tvData.text.toString() + "\n${data}")
    }

}