import java.util.*;
public class a5_4 {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num;
		System.out.print("정수를 입력하세요: ");
		num = sc.nextInt();
		System.out.print("입력된 정수 " + num + "의 절대값은 " + abs(num) + "입니다.");
	}
	
	public static int abs(int n) { 
		if (n < 0)
			n *= -1;
		return n;
	}
}
