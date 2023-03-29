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
		System.out.println("1.회원추가  2.회원삭제  3.회원출력  4.종료");
		do {
			have2 = 0;
			System.out.print("메뉴를 선택: ");
			n = sc.nextInt();
			if (n == 1) {
					System.out.print("추가할 회원의 이름: ");
					s = sc.next();
					for (String ss : list) {
						if (s == list.get(i)) {
						System.out.println("이미 존재하는 회원");
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
			
				System.out.print("삭제할 회원의 이름: ");
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
					System.out.println("회원이 존재하지 않음");
				}
			}
			else if (n == 3) {
				for (String ss : list) 
					System.out.println(ss);
			}
		} while (n != 4);

	}

}
