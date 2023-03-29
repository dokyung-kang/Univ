import java.util.*;
public class A6_4 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String n;
		int h;
		int w;
		
		Person p1 = new Person();
		
		System.out.print("이름은? : ");
		n = sc.next();
		System.out.print("키는? : ");
		h = sc.nextInt();
		System.out.print("몸무게는? : ");
		w = sc.nextInt();
		sc.close();

		Person p2 = new Person(n, h, w);
		
		p1.print();
		p2.print();
	}

}
