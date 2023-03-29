import java.util.*;
public class A5_2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int i;
		int seat[] = new int[5];
		int cnt = 0;
		int s;
		
		for(i = 0; i < seat.length; i++)
			seat[i] = 0;
		System.out.println("-------------------------");
		System.out.println("1 2 3 4 5");
		System.out.println("-------------------------");
		for(i = 0 ; i < seat.length; i++)
			System.out.print(seat[i] + " ");
		System.out.println();
		while(cnt != 5) {
			System.out.print("예약하려는 좌석번호를 입력하세요: ");
			s = sc.nextInt();
			if(seat[s - 1] != 0) 
				System.out.println("이미 예약되었습니다.");
			else {
				System.out.println("예약되었습니다.");
				cnt++;
				seat[s - 1] = 1;
			}
			System.out.println("-------------------------");
			System.out.println("1 2 3 4 5");
			System.out.println("-------------------------");
			for(i = 0 ; i < seat.length; i++)
				System.out.print(seat[i] + " ");
			System.out.println();
		}
		System.out.println("만석입니다.");
	}

}
