import java.util.*;
public class a3_1 {

	public static void main(String[] args) {
		String str;
		double num1;
		double num2;
		Scanner sc = new Scanner(System.in);
		
		System.out.print("���ڸ� �Է��ϼ���: ");
		str = sc.next();
		
		System.out.print("���� 2���� �Է��ϼ���(ex. 3 23) : ");
		num1 = sc.nextDouble();
		num2 = sc.nextDouble();
		
		if (str.equals("+")) {
			System.out.print(num1 + str + num2 + " = " + (num1 + num2));
		}
		else if (str.equals("-")) {
			System.out.print(num1 + str + num2 + " = " + (num1 - num2));
		}
		else if (str.equals("*")) {
			System.out.print(num1 + str + num2 + " = " + (num1 * num2));
		}
		else {
			if (num2 == 0) {
				System.out.print("������ ������ �� ����");
			}
			else {
				System.out.print(num1 + str + num2 + " = " + (num1 / num2));
			}
		}
	}

}
