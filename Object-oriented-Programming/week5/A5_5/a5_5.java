
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
		System.out.println("�л��� �̸�: " + stu.name);
		System.out.println("�л��� �й�: " + stu.rollno);
		System.out.println("�л��� ����: " + stu.age);
	}

}
