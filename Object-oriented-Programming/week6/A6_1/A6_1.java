import java.util.*;
public class A6_1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int y;
		int m;
		int d;
		
		System.out.print("�¿��� �⵵�� �Է��ϼ���: ");
		y = sc.nextInt();
		System.out.print("�¿��� ���� �Է��ϼ���: ");
		m = sc.nextInt();
		System.out.print("�¿��� ��¥�� �Է��ϼ���: ");
		d = sc.nextInt();
		sc.close();
		
		Date birth = new Date(y, m, d);
		
		birth.print();
	}

}
