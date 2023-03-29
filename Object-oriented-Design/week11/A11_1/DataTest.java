import java.util.*;
public class DataTest {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String name;
		String mean;
		int cnt = 0;
		
		Map<String, String> map = new HashMap<String, String>();
		map.put("java", "자바");
		map.put("school", "학교");
		map.put("map", "지도");
		
		System.out.println("*** keySet() ***");
		for(String key: map.keySet()) {
			String m = map.get(key);
			System.out.println("단어: " + key + ", 의미: " + m);
		}
		
		System.out.println("*** entrySet() ***");
		for(Map.Entry<String, String> entry : map.entrySet()) {
			System.out.println("(" + entry.getKey() + ", " + entry.getValue() + ")");
		}
		System.out.println();
		System.out.println();
		
		System.out.print("찾고 싶은 단어: ");
		name = sc.nextLine();
		while(!name.equals("quit")) {
			cnt = 0;
			for(String key: map.keySet()) {
				String m = map.get(key);
				if(name.equals(key)) {
					System.out.println("단어의 의미는 " + m);
					break;
				}
				cnt++;
			}
			if(cnt == 3)
				System.out.println("찾는 단어가 없습니댜.");
			System.out.print("찾고 싶은 단어: ");
			name = sc.nextLine();
		}
		if(name.equals("quit"))
			System.out.println("프로그램 종료");
	}

}
