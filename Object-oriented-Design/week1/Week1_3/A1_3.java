import java.util.*;
public class A1_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int fiveH = 0;
		int oneH = 0;
		int fiveT = 0;
		int oneT = 0;
		int total;
		
		System.out.print("500원 동전 개수: ");
		fiveH = sc.nextInt();
		System.out.print("100원 동전 개수: ");
		oneH = sc.nextInt();
		System.out.print("50원 동전 개수: ");
		fiveT = sc.nextInt();
		System.out.print("10원 동전 개수: ");
		oneT = sc.nextInt();
		
		total = fiveH * 500 + oneH * 100 + fiveT * 50 + oneT * 10;
		System.out.println("금액은 " + total + "원입니다.");

	}

}
