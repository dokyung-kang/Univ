import java.util.*;
public class A2_5 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s;
		String bigS;
		char c;
		int i;
		int sLen;
		
		System.out.print("���ڿ��� �Է��ϼ���: ");
		s = sc.next();
		
		bigS = s.toUpperCase();
		System.out.print("�빮�ڷ� ��ȯ: ");
		System.out.println(bigS);
		
		sLen = s.length();
		System.out.print("�ܲٷ� ���: ");
		for(i = sLen - 1; i >= 0; i--) {
			c = s.charAt(i);
			System.out.print(c);
		}
	}

}
