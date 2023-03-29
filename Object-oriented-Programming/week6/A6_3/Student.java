
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
		System.out.println("이름: " + name);
		System.out.println("학변: " + rollno);
		System.out.println("나이: " + age);
	}
}
