import java.util.*;
public class A1_1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		int cnt = 0;
		double total = 0;
		
		System.out.println("정수를 입력하고 마지막에 0을 입력하세요");
		while(true) {
			n = sc.nextInt();
			if(n == 0)
				break;
			total += n;
			cnt++;
		}
		
		System.out.println("입력한 수의 개수: " + cnt);
		System.out.println("평균: " + total/cnt);
	}

}
