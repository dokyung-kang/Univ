import java.util.Scanner;

public class Test3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.print("���� ��: ");
		int money = sc.nextInt();
		
		System.out.print("��ǰ ����: ");
		int price = sc.nextInt();
		
		System.out.println("�ΰ���: " + price / 10);
		System.out.println("�ܵ�: " + (money - price));
	}
}
