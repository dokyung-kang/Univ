import java.util.*;
public class A7_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int y;
		int m;
		int d;
		Scanner sc = new Scanner(System.in);
		
		System.out.print("태어난 년도를 입력하세요: ");
		y = sc.nextInt();
		System.out.print("태어난 월을 입력하세요: ");
		m = sc.nextInt();
		System.out.print("태어난 날짜를 입력하세요: ");
		d = sc.nextInt();
		
		Date obj = new Date();
		obj.setYear(y);
		obj.setMonth(m);
		obj.setDay(d);
		
		obj.print();
	}

}
