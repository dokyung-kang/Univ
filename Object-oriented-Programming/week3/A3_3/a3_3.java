import java.util.*;
public class a3_3 {

	public static void main(String[] args) {
		int n1;
		int n2;
		int n3;
		int bigN;
		Scanner sc = new Scanner(System.in);
		
		System.out.print("첫번째 숫자를 입력하세요: ");
		n1 = sc.nextInt();
		System.out.print("두번째 숫자를 입력하세요: ");
		n2 = sc.nextInt();
		System.out.print("세번째 숫자를 입력하세요: ");
		n3 = sc.nextInt();
		
		if (n1 >= n2 && n1 >= n3) {
			bigN = n1;
		}
		else if (n2 >= n1 && n2 >= n3) {
			bigN = n2;
		}
		else {
			bigN = n3;
		}
		
		System.out.print("가장 큰 숫자는 " + bigN + "입니다.");
	}

}
