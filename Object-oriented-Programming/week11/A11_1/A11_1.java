import java.util.*;
public class A11_1 {

	public static void main(String[] args) {
		boolean bb0;
		boolean bb1;
		boolean bb2;
		
		Scanner sc = new Scanner(System.in);
		
		BankAccount b0 = new BankAccount();
		BankAccount b1 = new BankAccount("�ҳ�", 2000);
		BankAccount b2 = new BankAccount("������", 500, 3.25);
		
		System.out.println("���� ���� ����� �����Դϴ�.");
		System.out.println(b0.toString());
		System.out.println(b1.toString());
		System.out.println(b2.toString());
		
		System.out.println("\n���� " + b0.getAccNo1() + "-" + b0.getAccNo2() + "�� �Ա��� �ݾ��� �Է��ϼ���: ");
		 bb0 = b0.deposit(sc.nextInt());
		if(bb0 == true)
			System.out.println("�Ա��� �����߽��ϴ�.");
		else
			System.out.println("�Ա��� �����߽��ϴ�.");
		
		System.out.println("\n���� ���� ����� �����Դϴ�.");
		System.out.println(b0.toString());
		System.out.println(b1.toString());
		System.out.println(b2.toString());

		System.out.println("\n���� " + b1.getAccNo1() + "-" + b1.getAccNo2() + "���� ����� �ݾ��� �Է��ϼ���: ");
		 bb1 = b1.withdraw(sc.nextInt());
		if(bb1 == true)
			System.out.println("����� �����߽��ϴ�.");
		else
			System.out.println("����� �����߽��ϴ�.");
		
		System.out.println("\n���� ���� ����� �����Դϴ�.");
		System.out.println(b0.toString());
		System.out.println(b1.toString());
		System.out.println(b2.toString());

		System.out.println("\n���� " + b1.getAccNo1() + "-" + b1.getAccNo2() + "���� " + 
		b2.getAccNo1() + "-" + b2.getAccNo2() + "���� �۱��� �ݾ��� �Է��ϼ���: ");
		 bb2 = b2.transfer(b1, b2, sc.nextInt());
		if(bb2 == true)
			System.out.println("�۱��� �����߽��ϴ�.");
		else
			System.out.println("�۱��� �����߽��ϴ�.");
		
		System.out.println("\n���� ���� ����� �����Դϴ�.");
		System.out.println(b0.toString());
		System.out.println(b1.toString());
		System.out.println(b2.toString());
	}

}
