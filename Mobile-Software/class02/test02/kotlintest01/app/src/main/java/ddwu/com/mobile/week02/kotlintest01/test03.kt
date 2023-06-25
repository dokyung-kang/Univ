package ddwu.com.mobile.week02.kotlintest01

import java.util.Random

fun main() {

    val random = Random()
    var lotto = mutableSetOf<Int>()

    while(lotto.size < 6) {
        val num = random.nextInt(45)
        if(num == 0) continue
        lotto.add(num)
    }

    print("이번 주 예상 로또번호: ")
    for (number in lotto){
        print(" $number ")
    }

//    val random = Random()
//
//    var list = mutableListOf<Int>(0, 0, 0, 0, 0, 0)
//    var i: Int = 0
//
//    while(i < 6){
//        var num = random.nextInt(45)
//        list.set(i++, num)
//    }
//
//    println("$list")
}