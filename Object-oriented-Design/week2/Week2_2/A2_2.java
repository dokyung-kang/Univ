import java.util.*;
public class A2_2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		char a;
		String c;
		String add;
		
		do {
			System.out.print("����� �ֹ���ȣ�� �Է��ϼ���. (012345-1234567) >>  ");
			add = sc.next();
			a = add.charAt(7);
			if(a == '1' || a == '3')
				System.out.println("����� �����Դϴ�.");
			else if(a == '2' || a == '4')
				System.out.println("����� �����Դϴ�.");
			else
				System.out.println("��ȿ���� ���� �ֹι�ȣ�Դϴ�.");
			System.out.print("�Է��� ����ϰڽ��ϱ�? (y/n)");
			c = sc.next();
		} while(c.equals("y"));
	}

}
