import java.util.*;
public class A7_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int y;
		int m;
		int d;
		Scanner sc = new Scanner(System.in);
		
		System.out.print("�¾ �⵵�� �Է��ϼ���: ");
		y = sc.nextInt();
		System.out.print("�¾ ���� �Է��ϼ���: ");
		m = sc.nextInt();
		System.out.print("�¾ ��¥�� �Է��ϼ���: ");
		d = sc.nextInt();
		
		Date obj = new Date();
		obj.setYear(y);
		obj.setMonth(m);
		obj.setDay(d);
		
		obj.print();
	}

}
