import java.util.*;
public class a5_6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String name;
		String add;
		System.out.print("�̸��� �Է��ϼ���: ");
		name = sc.nextLine();
		System.out.print("�ּҸ� �Է��ϼ���: ");
		add = sc.nextLine();
		address(name,add);
	}
	
	public static void address(String n, String a) {
		System.out.print(n + "�� �ּҴ� " + a + "�Դϴ�.");
	}
}
