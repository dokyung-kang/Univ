import java.util.*;
public class A6_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String n;
		int r;
		int a;
		
		System.out.print("이름을 입력하시오.: ");
		n = sc.next();
		System.out.print("학번을 입력하시오.: ");
		r = sc.nextInt();
		System.out.print("나이를 입력하시오.: ");
		a = sc.nextInt();
		sc.close();
		
		Student s = new Student(n, r, a);
		s.print();
	}

}
