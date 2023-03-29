import java.util.*;
public class A2_4 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Average a = new Average();
		int a1;
		int b1;
		int a2;
		int b2;
		int c2;
		
		System.out.println("두 수: ");
		a1 = sc.nextInt();
		b1 = sc.nextInt();
		System.out.println("세 수: ");
		a2 = sc.nextInt();
		b2 = sc.nextInt();
		c2 = sc.nextInt();
		
		System.out.println();
		System.out.println("두수의 평균: " + a.getAverage(a1, b1));
		System.out.println("두수의 평균: " + a.getAverage(a2, b2, c2));
	}

}
