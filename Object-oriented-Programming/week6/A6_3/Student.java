
public class Student {
	String name;
	int rollno;
	int age;
	
	public Student(String name, int rollno, int age) {
		this.name = name;
		this.rollno = rollno;
		this.age = age;
	}
	
	void print() {
		System.out.println("�̸�: " + name);
		System.out.println("�к�: " + rollno);
		System.out.println("����: " + age);
	}
}
