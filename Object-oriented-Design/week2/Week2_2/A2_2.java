import java.util.*;
public class A2_2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		char a;
		String c;
		String add;
		
		do {
			System.out.print("당신의 주민전호를 입력하세요. (012345-1234567) >>  ");
			add = sc.next();
			a = add.charAt(7);
			if(a == '1' || a == '3')
				System.out.println("당신은 남자입니다.");
			else if(a == '2' || a == '4')
				System.out.println("당신은 여자입니다.");
			else
				System.out.println("유효하지 않은 주민번호입니다.");
			System.out.print("입력을 계속하겠습니까? (y/n)");
			c = sc.next();
		} while(c.equals("y"));
	}

}
