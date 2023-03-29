import java.util.*;
public class a4_6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int i = 0;
		int n;
		int score;
		int total = 0;
		double avg;
		System.out.print("성적을 입력받는 학생의 수는?: ");
		n = sc.nextInt();
		int[] list = new int[n];
		while (i < list.length) {
			System.out.print((i + 1) + "번째 학생의 성적을 입력하세요: ");
			score = sc.nextInt();
			list[i] = score;
			total += list[i];
			i++;
		}
		avg = total / list.length;
		System.out.println("합계: " + total);
		System.out.println("평균: " + avg);
	}

}
