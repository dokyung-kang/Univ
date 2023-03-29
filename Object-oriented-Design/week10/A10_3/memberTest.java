import java.util.*;
public class memberTest {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		TreeSet<Member> ts = new TreeSet<>();
		
		int i;
		String name;
		
		System.out.println("3명의 이름을 입력: ");
		for(i = 0; i < 3; i++) {
			name = sc.nextLine();
			ts.add(new Member(name));
		}
		System.out.println(ts.toString());
	}

}
