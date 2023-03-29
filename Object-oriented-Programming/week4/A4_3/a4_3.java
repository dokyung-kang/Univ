import java.util.*;
public class a4_3 {

	public static void main(String[] args) {
		String str;
		Scanner sc = new Scanner(System.in);
		while (true) {
			System.out.print("문자를 입력하세요: ");
			str = sc.next();
			if (str.equals("quit")) {
				System.out.print("프로그램 종료!");
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
				System.out.println("모음입니다.");
				break;
			default:
				System.out.println("자음입니다.");
				break;
			}
		}
	}

}
