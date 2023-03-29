import java.util.*;
public class sTest {

	public static void main(String[] args) {
		ArrayList<Student> s = new ArrayList<>();
		
		s.add(new Student("홍길동", 1, 100, 100, 100));
		s.add(new Student("송중기", 2, 90, 60, 80));
		s.add(new Student("김자바", 3, 70, 80, 75));
		s.add(new Student("이자바", 4, 80, 75, 90));
		s.add(new Student("안자바", 5, 90, 60, 100));
		
		Collections.sort(s);
		

		Iterator<Student> e = s.iterator();
		while(e.hasNext()) {
			Student stu = e.next();
			System.out.println(stu.toString());
		}
	}

}
