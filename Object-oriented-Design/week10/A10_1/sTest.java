import java.util.*;
public class sTest {

	public static void main(String[] args) {
		ArrayList<Student> s = new ArrayList<>();
		
		s.add(new Student("ȫ�浿", 1, 100, 100, 100));
		s.add(new Student("���߱�", 2, 90, 60, 80));
		s.add(new Student("���ڹ�", 3, 70, 80, 75));
		s.add(new Student("���ڹ�", 4, 80, 75, 90));
		s.add(new Student("���ڹ�", 5, 90, 60, 100));
		
		Collections.sort(s);
		

		Iterator<Student> e = s.iterator();
		while(e.hasNext()) {
			Student stu = e.next();
			System.out.println(stu.toString());
		}
	}

}
