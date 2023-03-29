import java.util.*;
public class A2_5 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s;
		String bigS;
		char c;
		int i;
		int sLen;
		
		System.out.print("문자열을 입력하세요: ");
		s = sc.next();
		
		bigS = s.toUpperCase();
		System.out.print("대문자로 변환: ");
		System.out.println(bigS);
		
		sLen = s.length();
		System.out.print("겨꾸로 출력: ");
		for(i = sLen - 1; i >= 0; i--) {
			c = s.charAt(i);
			System.out.print(c);
		}
	}

}
