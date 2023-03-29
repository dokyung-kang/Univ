import java.util.*;
public class A8_2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = 1;
		String[] d = {"일", "월", "화", "수", "목", "금", "토"};

		System.out.print("정수를 입력하세요>>");
		while(true){
			try {
				n = sc.nextInt();
				System.out.println(d[n]);
			}catch(InputMismatchException e) {
				System.out.println("경고! 수를 입력하지 않았습니다.");
				sc.nextLine();
			}catch(Exception e) {
				if(n < 0) {
					System.out.println("프로그램 종료합니다...");
					break;
				}
				System.out.println("경고! 알맞은 수를 입력하지 않았습니다.");
				sc.nextLine();
			} 
			System.out.print("정수를 입력하세요>>");
		}
	}

}
