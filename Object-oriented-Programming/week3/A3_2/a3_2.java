import java.util.*;
public class a3_2 {

	public static void main(String[] args) {
		String userA;
		String userB;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("���� ���� �� �����Դϴ�. ����, ����, �� �߿��� �Է��ϼ���");
		System.out.print("User A >> ");
		userA = sc.next();
		System.out.print("User B >> ");
		userB = sc.next();
		
		if (userA.equals("����")) {
			if (userB.equals("����")) {
				System.out.print("�����ϴ�.");
			}
			else if (userB.equals("����")) {
				System.out.print("B�� �̰���ϴ�.");				
			}
			else if (userB.equals("��")) {
				System.out.print("A�� �̰���ϴ�.");
			}
		}
		else if (userA.equals("����")) {
			if (userB.equals("����")) {
				System.out.print("A�� �̰���ϴ�.");
			}
			else if (userB.equals("����")) {
				System.out.print("�����ϴ�.");
			}
			else if (userB.equals("��")) {
				System.out.print("B�� �̰���ϴ�.");
			}
		}
		else if (userA.equals("��")) {
			if (userB.equals("����")) {
				System.out.print("B�� �̰���ϴ�.");
			}
			else if (userB.equals("����")) {
				System.out.print("A�� �̰���ϴ�.");
			}
			else if (userB.equals("��")) {
				System.out.print("�����ϴ�.");
			}
		}
	}
}
