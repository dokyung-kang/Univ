import java.util.*;
public class a4_3 {

	public static void main(String[] args) {
		String str;
		Scanner sc = new Scanner(System.in);
		while (true) {
			System.out.print("���ڸ� �Է��ϼ���: ");
			str = sc.next();
			if (str.equals("quit")) {
				System.out.print("���α׷� ����!");
				break;
			}
			switch(str) {
			case "A":
			case "a":
			case "E":
			case "e":
			case "I":
			case "i":
			case "O":
			case "o":
			case "U":
			case "u":
				System.out.println("�����Դϴ�.");
				break;
			default:
				System.out.println("�����Դϴ�.");
				break;
			}
		}
	}

}
