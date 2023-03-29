import java.util.*;
public class DataTest {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String name;
		String mean;
		int cnt = 0;
		
		Map<String, String> map = new HashMap<String, String>();
		map.put("java", "�ڹ�");
		map.put("school", "�б�");
		map.put("map", "����");
		
		System.out.println("*** keySet() ***");
		for(String key: map.keySet()) {
			String m = map.get(key);
			System.out.println("�ܾ�: " + key + ", �ǹ�: " + m);
		}
		
		System.out.println("*** entrySet() ***");
		for(Map.Entry<String, String> entry : map.entrySet()) {
			System.out.println("(" + entry.getKey() + ", " + entry.getValue() + ")");
		}
		System.out.println();
		System.out.println();
		
		System.out.print("ã�� ���� �ܾ�: ");
		name = sc.nextLine();
		while(!name.equals("quit")) {
			cnt = 0;
			for(String key: map.keySet()) {
				String m = map.get(key);
				if(name.equals(key)) {
					System.out.println("�ܾ��� �ǹ̴� " + m);
					break;
				}
				cnt++;
			}
			if(cnt == 3)
				System.out.println("ã�� �ܾ �����ϴ�.");
			System.out.print("ã�� ���� �ܾ�: ");
			name = sc.nextLine();
		}
		if(name.equals("quit"))
			System.out.println("���α׷� ����");
	}

}
