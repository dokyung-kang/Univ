import java.util.*;
public class A4_1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		int num;
		String name;
		int i;
		
		System.out.print("배열의 크기는>>");
		n = sc.nextInt();
		
		Student s[] = new Student[n];
		
		for(i = 0; i < s.length; i++) {
			System.out.print("학번>>");
			num = sc.nextInt();
			sc.nextLine();
			System.out.print("이름>>");
			name = sc.nextLine();
			s[i] = new Student(num, name);
		}
		
		Arrays.sort(s);
		for(Student stu : s)
			System.out.println("학번 = " + stu.getNum() + ", 이름 = " + stu.getName());
	}

}
