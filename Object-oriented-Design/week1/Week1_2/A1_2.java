import java.util.*;
public class A1_2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s;
		char c;
		
		while(true) {
			System.out.print("���ڸ� �Է��ϼ���: ");
			s = sc.next();
			c = s.charAt(0);
			if(Character.isUpperCase(c) == true) {
				c += 32;
				System.out.println(c);
			}
			else if (Character.isLowerCase(c) == true) {
				c -= 32;
				System.out.println(c);
			}
			else if (c != '0') {
				System.out.println("�����ڰ� �ƴմϴ�.");
				System.out.println(c);
			}
			else {
				break;
			}
		}
		

	}

}
