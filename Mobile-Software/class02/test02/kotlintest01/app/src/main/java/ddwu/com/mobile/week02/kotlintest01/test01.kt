package ddwu.com.mobile.week02.kotlintest01

fun main() {
    var sum: Int = 0
    var value: Int = 0

    for(i in 1 .. 5) {
        print("숫자 입력: ")
        value = readLine()!!.toInt()
        sum += value
    }

    println("총합: ${sum}, 평균: ${sum/5}")

//    val num1 = readLine()!!.toInt()
//    val num2 = readLine()!!.toInt()
//    val num3 = readLine()!!.toInt()
//    val num4 = readLine()!!.toInt()
//    val num5 = readLine()!!.toInt()
//
//    val total = num1 + num2 + num3 + num4 + num5
//    val avg = total / 5
//
//    println("총합 : $total")
//    println("평균 : $avg")
//    println()
//
//    val arrayValue = Array<Int>(5) { readLine()!!.toInt() }
//
//    val total2 =  arrayValue[0] + arrayValue[1] + arrayValue[2] + arrayValue[3] + arrayValue[4]
//    val avg2 = total2 / 5
//
//    println("총합 : $total2")
//    println("평균 : $avg2")

}
