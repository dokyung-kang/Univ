import java.util.*;
public class A1_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int fiveH = 0;
		int oneH = 0;
		int fiveT = 0;
		int oneT = 0;
		int total;
		
		System.out.print("500�� ���� ����: ");
		fiveH = sc.nextInt();
		System.out.print("100�� ���� ����: ");
		oneH = sc.nextInt();
		System.out.print("50�� ���� ����: ");
		fiveT = sc.nextInt();
		System.out.print("10�� ���� ����: ");
		oneT = sc.nextInt();
		
		total = fiveH * 500 + oneH * 100 + fiveT * 50 + oneT * 10;
		System.out.println("�ݾ��� " + total + "���Դϴ�.");

	}

}
