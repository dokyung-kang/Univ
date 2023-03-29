
public class Student implements Comparable{
	String name;
	int n;
	int korean;
	int english;
	int math;
	int total;
	double avg;
	
	Student() {
		
	}
	Student(String name, int n, int korean, int english, int math){
		this.name = name;
		this.n = n;
		this.korean = korean;
		this.english = english;
		this.math = math;
		getTotal();
		getAvg();
	}
	void getTotal() {
		this.total = korean + english + math;
	}
	void getAvg() {
		this.avg = (double)total / 3;
	}
	public int compareTo(Object obj) {
		Student other = (Student) obj;
		return(this.name.compareTo(other.name));
	}
	public String toString() {
		return name + ", " + n + ": " + korean + ", " + english + ", " + math +
				", " + total + ", " + avg;
	}
}
