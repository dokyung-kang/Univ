import java.util.*;
public class PhoneTest {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		String name;
		String phoneN;
		String findN;
		int i;
		int cnt = 0;
		
		Map<String, String> map = new HashMap<String, String>();
		System.out.println("�Է��Ϸ��� �������� ����: ");
		n = sc.nextInt();
		for(i = 0; i < n; i++) {
			System.out.print(i + 1 + "    �̸�, ��ȭ��ȣ>> ");
			name = sc.next();
			phoneN = sc.next();
			map.put(name, phoneN);
		}
		System.out.print("��ȭ��ȣ�� ã������ ȸ���� �̸���: ");
		findN = sc.next();
		for(String key: map.keySet()) {
			String p = map.get(key);
			if(findN.equals(key)) {
				System.out.println(key + "�� ��ȭ��ȣ��: " + p);
				break;
			}
			cnt++;
		}
		if(cnt == 3)
			System.out.println("�ش��ϴ� �̸��� ȸ���� ����Ʈ�� �����ϴ�.");
	}

}
