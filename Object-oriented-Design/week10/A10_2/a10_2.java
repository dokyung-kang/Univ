import java.util.*;
public class a10_2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String n;
		int a;
		String findN;
		String delN;
		
		HashSet<String> set = new HashSet<String>();
		
		set.add("�̱浿");
		set.add("ȫ�浿");
		
		System.out.println("�� ��ü�� : 2");
		
		Iterator<String> e = set.iterator();
		while(e.hasNext()) {
			String m = e.next();
			System.out.println("�̸�: " + m + "����: 30");
		}
		System.out.println("ã�� �̸��� �Է�: ");
		findN = sc.nextLine();
		if(set.contains(findN))
				System.out.println("ã�� �����Ͱ� �ִ�.");
		System.out.print("�����Ϸ��� �̸� �Է�: ");
		delN = sc.nextLine();
		if(set.contains(delN)) {
			System.out.println(delN + " ȸ���� ������");
			set.remove(delN);
		}
	}

}
