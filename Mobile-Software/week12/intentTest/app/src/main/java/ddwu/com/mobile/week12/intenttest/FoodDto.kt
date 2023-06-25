package ddwu.com.mobile.week12.intenttest

data class FoodDto (val photo: Int, val food: String, var count: Int ): java.io.Serializable {
    override fun toString() = "$food ($count)"
}