import java.util.*;
public class A7_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String s;
		String bigS;
		char c;
		int len;
		int i;
		
		Scanner sc = new Scanner(System.in);
		System.out.print("문자열을 입력하세요: ");
		s = sc.next();
		
		bigS = s.toUpperCase();
		System.out.print("대문자로 변환: ");
		System.out.print(bigS + "\n");
		
		len = s.length();
		System.out.print("거꾸로 출력: ");
		for (i = len - 1; i >= 0; i--) {
			c = s.charAt(i);
			System.out.print(c);
		}
	}

}
