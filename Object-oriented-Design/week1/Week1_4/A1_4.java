import java.util.*;
public class A1_4 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String n;
		char num;
		
		System.out.print("16���� �� ���� �Է�: ");
		n = sc.next();
		num = n.charAt(0);
		
		if(48 <= num && num <= 57)
			System.out.println("10���� ==> " + num);
		else if(65 <= num && num <= 70)
			System.out.println("10���� ==> " + (num - 55));
		else if(97 <= num && num <= 102)
			System.out.println("10���� ==> " + (num - 87));
		else
			System.out.println("16������ �ƴ�");
	}

}
