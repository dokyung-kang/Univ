import java.util.*;
public class A2_6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Phone p1;
		Phone p2;
		String n;
		String t;
		System.out.print("�̸�, ��ȭ��ȣ�� �Է��ϼ���. >> ");
		n = sc.next();
		t = sc.next();
		p1 = new Phone(n, t);
		System.out.println(p1.getName() + "�� ��ȣ�� " + p1.getTel());

		System.out.print("�̸�, ��ȭ��ȣ�� �Է��ϼ���. >> ");
		n = sc.next();
		t = sc.next();
		p2 = new Phone(n, t);
		System.out.println(p2.getName() + "�� ��ȣ�� " + p2.getTel());

	}

}
