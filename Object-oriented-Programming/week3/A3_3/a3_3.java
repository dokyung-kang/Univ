import java.util.*;
public class a3_3 {

	public static void main(String[] args) {
		int n1;
		int n2;
		int n3;
		int bigN;
		Scanner sc = new Scanner(System.in);
		
		System.out.print("ù��° ���ڸ� �Է��ϼ���: ");
		n1 = sc.nextInt();
		System.out.print("�ι�° ���ڸ� �Է��ϼ���: ");
		n2 = sc.nextInt();
		System.out.print("����° ���ڸ� �Է��ϼ���: ");
		n3 = sc.nextInt();
		
		if (n1 >= n2 && n1 >= n3) {
			bigN = n1;
		}
		else if (n2 >= n1 && n2 >= n3) {
			bigN = n2;
		}
		else {
			bigN = n3;
		}
		
		System.out.print("���� ū ���ڴ� " + bigN + "�Դϴ�.");
	}

}
