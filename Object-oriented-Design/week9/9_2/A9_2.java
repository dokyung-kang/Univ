import java.util.*;
public class A9_2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str;
		int cnt;
		int cntZ;
		System.out.println("���ٷ� ������ �Է��ϼ���. (����� exit�� �Է�) >>");
		str = sc.nextLine();
		while(!str.equals("exit")) {
			cnt = 0;
			cntZ = 0;
			StringTokenizer s = new StringTokenizer(str, " ", true);
			while(s.hasMoreTokens()) {
				if(s.nextToken().equals(" "))
					cntZ++;
				else
					cnt++;
			}	
			System.out.println("���� ������ " + cnt);
			System.out.println("������ ������" + cntZ);
			System.out.println("���ٷ� ������ �Է��ϼ���. (����� exit�� �Է� >>");
			str = sc.nextLine();
		}
		System.out.println("�����մϴ�...");
	}

}
