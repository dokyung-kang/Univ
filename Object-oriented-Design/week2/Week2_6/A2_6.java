import java.util.*;
public class A2_6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Phone p1;
		Phone p2;
		String n;
		String t;
		System.out.print("이름, 전화번호를 입력하세요. >> ");
		n = sc.next();
		t = sc.next();
		p1 = new Phone(n, t);
		System.out.println(p1.getName() + "의 번호는 " + p1.getTel());

		System.out.print("이름, 전화번호를 입력하세요. >> ");
		n = sc.next();
		t = sc.next();
		p2 = new Phone(n, t);
		System.out.println(p2.getName() + "의 번호는 " + p2.getTel());

	}

}
