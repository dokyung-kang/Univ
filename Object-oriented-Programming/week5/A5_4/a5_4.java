import java.util.*;
public class a5_4 {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num;
		System.out.print("������ �Է��ϼ���: ");
		num = sc.nextInt();
		System.out.print("�Էµ� ���� " + num + "�� ���밪�� " + abs(num) + "�Դϴ�.");
	}
	
	public static int abs(int n) { 
		if (n < 0)
			n *= -1;
		return n;
	}
}
