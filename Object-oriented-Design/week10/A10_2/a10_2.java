import java.util.*;
public class a10_2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String n;
		int a;
		String findN;
		String delN;
		
		HashSet<String> set = new HashSet<String>();
		
		set.add("이길동");
		set.add("홍길동");
		
		System.out.println("총 객체수 : 2");
		
		Iterator<String> e = set.iterator();
		while(e.hasNext()) {
			String m = e.next();
			System.out.println("이름: " + m + "나이: 30");
		}
		System.out.println("찾는 이름을 입력: ");
		findN = sc.nextLine();
		if(set.contains(findN))
				System.out.println("찾는 데이터가 있다.");
		System.out.print("삭제하려는 이름 입력: ");
		delN = sc.nextLine();
		if(set.contains(delN)) {
			System.out.println(delN + " 회원이 삭제됨");
			set.remove(delN);
		}
	}

}
