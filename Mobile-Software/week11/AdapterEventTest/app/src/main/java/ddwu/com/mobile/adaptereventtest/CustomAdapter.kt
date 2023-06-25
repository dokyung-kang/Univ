package ddwu.com.mobile.adaptereventtest

import android.view.LayoutInflater
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import ddwu.com.mobile.adaptereventtest.databinding.ListWeatherBinding

class CustomAdapter(val weathers: ArrayList<WeatherDto>)
    :RecyclerView.Adapter<CustomAdapter.CustomViewHolder>(){

    override fun getItemCount(): Int {
        return weathers.size
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): CustomViewHolder {
//        val weatherView = LayoutInflater.from(parent.context).inflate(R.layout.list_weather, parent, false)
        val weatherBinding = ListWeatherBinding.inflate(LayoutInflater.from(parent.context), parent, false)
        return CustomViewHolder(weatherBinding)
    }

    override fun onBindViewHolder(holder: CustomViewHolder, position: Int) {
        holder.weatherBinding.tvDong.text = weathers[position].dong
        holder.weatherBinding.tvLoc.text = weathers[position].loc
        holder.weatherBinding.tvWeather.text = weathers[position].weather
    }
        class CustomViewHolder(val weatherBinding: ListWeatherBinding): RecyclerView.ViewHolder(weatherBinding.root){

        }
}