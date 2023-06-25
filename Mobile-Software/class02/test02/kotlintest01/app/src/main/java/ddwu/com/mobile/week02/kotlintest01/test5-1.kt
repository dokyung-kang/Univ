package ddwu.com.mobile.week02.kotlintest01

fun test(no: Int) :Unit {
    println(no)
}

fun main() {
    val some = {no1:Int, no2:Int ->
        println("in lamda")
        no1 * no2
    }

    println("result : ${some(10, 20)}")
}
