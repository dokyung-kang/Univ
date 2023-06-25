package ddwu.com.mobile.adaptereventtest

data class WeatherDto(val dong: String, val loc: String, val weather: String) {
    override fun toString(): String {
        return "$dong ($loc)"
    }
}