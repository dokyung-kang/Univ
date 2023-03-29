
public class Student implements Comparable{
	int num;
	String name;
	
	public Student() {
		
	}
	
	public Student(int num, String name) {
		this.num = num;
		this.name = name;
	}

	public int getNum() {
		return num;
	}
	
	public String getName() {
		return name;
	}
	
	public int compareTo(Object obj) {
		Student stu = (Student) obj;
		if(num < stu.num)
			return -1;
		else if(num > stu.num)
			return 1;
		else
			return 0;
	}
}
