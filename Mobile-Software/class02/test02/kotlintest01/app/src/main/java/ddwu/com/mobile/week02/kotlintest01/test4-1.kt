package ddwu.com.mobile.week02.kotlintest01

class User(val name: String, var count:Int){
    //val name : String = ""
    init {
        println("i am init....")
        println("init $name $count")
    }

    fun someFun() {
        println("name : $name, count : $count")
    }
}
fun main() {
    val user = User("kkang", 10)
}

