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
		System.out.print("���ڿ��� �Է��ϼ���: ");
		s = sc.next();
		
		bigS = s.toUpperCase();
		System.out.print("�빮�ڷ� ��ȯ: ");
		System.out.print(bigS + "\n");
		
		len = s.length();
		System.out.print("�Ųٷ� ���: ");
		for (i = len - 1; i >= 0; i--) {
			c = s.charAt(i);
			System.out.print(c);
		}
	}

}
