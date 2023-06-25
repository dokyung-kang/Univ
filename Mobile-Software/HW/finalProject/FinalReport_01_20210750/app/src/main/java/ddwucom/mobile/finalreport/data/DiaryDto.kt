package ddwucom.mobile.finalreport.data

import java.io.Serializable

data class DiaryDto(val id: Int, var title: String, var date: String, var weather: String, var place: String, var music: String, var story: String) : Serializable {
    override fun toString() = "$id - $title ( $date ) - ( $weather ) - ( $place ) - ( $music ) - ( $story )"
}