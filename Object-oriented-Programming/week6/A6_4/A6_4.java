import java.util.*;
public class A6_4 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String n;
		int h;
		int w;
		
		Person p1 = new Person();
		
		System.out.print("�̸���? : ");
		n = sc.next();
		System.out.print("Ű��? : ");
		h = sc.nextInt();
		System.out.print("�����Դ�? : ");
		w = sc.nextInt();
		sc.close();

		Person p2 = new Person(n, h, w);
		
		p1.print();
		p2.print();
	}

}
