import java.util.*;
public class a4_1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int guess;
		int answer = (int) (Math.random() * 100);
		int count = 0;
		do
		{
			System.out.print("정답을 추측하여 보세요: ");
			guess = sc.nextInt();
			if (guess < answer)
				System.out.println("LOW");
			if (guess > answer)
				System.out.println("HIGH");
			count++;
		} while(guess != answer);
		System.out.print("축하합니다. 시도횟수= " + count);
	}

}
