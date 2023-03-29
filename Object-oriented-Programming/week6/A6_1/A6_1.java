import java.util.*;
public class A6_1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int y;
		int m;
		int d;
		
		System.out.print("태여난 년도를 입력하세요: ");
		y = sc.nextInt();
		System.out.print("태여난 월을 입력하세요: ");
		m = sc.nextInt();
		System.out.print("태여난 날짜를 입력하세요: ");
		d = sc.nextInt();
		sc.close();
		
		Date birth = new Date(y, m, d);
		
		birth.print();
	}

}
