import java.util.*;
public class a5_6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String name;
		String add;
		System.out.print("이름을 입력하세요: ");
		name = sc.nextLine();
		System.out.print("주소를 입력하세요: ");
		add = sc.nextLine();
		address(name,add);
	}
	
	public static void address(String n, String a) {
		System.out.print(n + "의 주소는 " + a + "입니다.");
	}
}
