import java.util.*;
public class ListName {

	public static void main(String[] args) {
		int n;
		String s;
		int have1 = 0;
		int have2;
		int i = 0;
		Scanner sc = new Scanner(System.in);
		ArrayList<String> list = new ArrayList<>();
		System.out.println("1.ȸ���߰�  2.ȸ������  3.ȸ�����  4.����");
		do {
			have2 = 0;
			System.out.print("�޴��� ����: ");
			n = sc.nextInt();
			if (n == 1) {
					System.out.print("�߰��� ȸ���� �̸�: ");
					s = sc.next();
					for (String ss : list) {
						if (s == list.get(i)) {
						System.out.println("�̹� �����ϴ� ȸ��");
						have1 = 1;
						break;
						}
						i++;
				}
				if (have1 != 1) {
					list.add(s);
					have1 = 0;
				}
			}
			else if (n == 2) {
			
				System.out.print("������ ȸ���� �̸�: ");
				s = sc.next();
				for (String ss : list) {
					if (s == list.get(i)) {
						list.remove(i);
					have2 = 1;
					break;
					}
				}
					i++;
				if (have2 != 1) {
					System.out.println("ȸ���� �������� ����");
				}
			}
			else if (n == 3) {
				for (String ss : list) 
					System.out.println(ss);
			}
		} while (n != 4);

	}

}
