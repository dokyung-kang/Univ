import java.util.*;
public class A4_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int size = 1;
		int num;
		int i;
		String[][] members = new String[size][2];
		
		do {
			System.out.println("-------------------------------------------");
			System.out.println(" 1.ȸ���� | 2.�����Է� | 3.ȸ������Ʈ | 4.����");
			System.out.println("-------------------------------------------");
			System.out.print("����>");
			num = sc.nextInt();
			sc.nextLine();
		switch(num) {
			case 1:
				System.out.print("ȸ����>");
				size = sc.nextInt();
				sc.nextLine();
				members = new String[size][2];
				break;
			case 2:
				for(i = 0; i < size; i++) {
					System.out.print("�̸��� �Է��ϼ��� : ");
					members[i][0] = sc.nextLine();
					System.out.print("��ȭ��ȣ�� �Է��ϼ��� : ");
					members[i][1] = sc.nextLine();
				}
				break;
			case 3:
				System.out.println("** ȸ�� ���� **");
				for(i = 0; i < size; i++)
					System.out.println(members[i][0] + " " + members[i][1]);
				break;
			}
		}while(num != 4);
	}

}
