import java.util.*;
public class A9_1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str;
		int cnt = 0;
		int i = 0;
		ArrayList<String> arr1 = new ArrayList<>();
		System.out.print("�ܾ� ���ڿ��� �Է��ϼ���>>");
		str = sc.nextLine();
		
		StringTokenizer s = new StringTokenizer(str, " ", false);
		while(s.hasMoreTokens()) {
			cnt++;
			arr1.add(s.nextToken());
		}
		System.out.println("��� " + cnt + "���� �ܾ �ֽ��ϴ�.");
		System.out.println("[�и��� ��ū]");
		String[] arr2 = new String[cnt];
		for(i = 0; i < cnt; i++) {
			System.out.println(arr1.get(i));
			arr2[i] = arr1.get(i);
		}
		System.out.println("��ū �� : " + cnt);
		System.out.println("====== sort ======");
		Arrays.sort(arr2);
		for(String list : arr2)
			System.out.println(list);
	}

}
