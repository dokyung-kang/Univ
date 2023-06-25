package ddwu.com.mobile.week02.kotlintest01

fun main() {

    var weight : Int = 0
    var height : Double = 0.0

    print("키를 입력하시요.: ")
    height = readLine()!!.toInt() / 100.0

    print("몸무게를 입력하시오.: ")
    weight = readLine()!!.toInt()

    val bmi = weight / (height * height)

    val result = when {
        18.5 >= bmi -> "저체중입니다."
        23 >= bmi -> "정상입니다."
        25 >= bmi -> "과체중입니다."
        25 < bmi -> "비만입니다."
        else -> "계산 오류"
    }

    print("키 ${height} m, 몸무게 ${weight} kg 의 BMI는 ${bmi}, ${result}")
//    var height: Double = 0.0
//    var weight: Int = 0
//
//    print("키를 입력하시오. (cm 단위): ")
//    height = readLine()!!.toDouble()
//    print("몸무게를 입려가시오. (kg 단위): ")
//    weight = readLine(s)!!.toInt()
//
//    val BMI: Double = weight / ((height / 100) * (height / 100))
//    var result = when (BMI) {
//        18.5 >= BMI -> "저체중입니다"
//
//    }
}