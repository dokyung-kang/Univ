import java.util.*;
public class A1_1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		int cnt = 0;
		double total = 0;
		
		System.out.println("������ �Է��ϰ� �������� 0�� �Է��ϼ���");
		while(true) {
			n = sc.nextInt();
			if(n == 0)
				break;
			total += n;
			cnt++;
		}
		
		System.out.println("�Է��� ���� ����: " + cnt);
		System.out.println("���: " + total/cnt);
	}

}
