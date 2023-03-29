
class Student {
		String name;
		int rollno;
		int age;
	}

public class a5_5 {

	public static void main(String[] args) {
		Student stu;
		stu = new Student();
		stu.name = "Kim";
		stu.rollno = 20180001;
		stu.age = 20;
		System.out.println("학생의 이름: " + stu.name);
		System.out.println("학생의 학번: " + stu.rollno);
		System.out.println("학생의 나이: " + stu.age);
	}

}
