import java.util.*;
public class A9_1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str;
		int cnt = 0;
		int i = 0;
		ArrayList<String> arr1 = new ArrayList<>();
		System.out.print("단어 문자열을 입력하세요>>");
		str = sc.nextLine();
		
		StringTokenizer s = new StringTokenizer(str, " ", false);
		while(s.hasMoreTokens()) {
			cnt++;
			arr1.add(s.nextToken());
		}
		System.out.println("모두 " + cnt + "개의 단어가 있습니다.");
		System.out.println("[분리된 토큰]");
		String[] arr2 = new String[cnt];
		for(i = 0; i < cnt; i++) {
			System.out.println(arr1.get(i));
			arr2[i] = arr1.get(i);
		}
		System.out.println("토큰 수 : " + cnt);
		System.out.println("====== sort ======");
		Arrays.sort(arr2);
		for(String list : arr2)
			System.out.println(list);
	}

}
