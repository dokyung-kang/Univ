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
		System.out.println("입력하려는 데이터의 수는: ");
		n = sc.nextInt();
		for(i = 0; i < n; i++) {
			System.out.print(i + 1 + "    이름, 전화번호>> ");
			name = sc.next();
			phoneN = sc.next();
			map.put(name, phoneN);
		}
		System.out.print("전화번호를 찾으려는 회원의 이름은: ");
		findN = sc.next();
		for(String key: map.keySet()) {
			String p = map.get(key);
			if(findN.equals(key)) {
				System.out.println(key + "의 전화번호는: " + p);
				break;
			}
			cnt++;
		}
		if(cnt == 3)
			System.out.println("해당하는 이름의 회원은 리스트에 없습니다.");
	}

}
