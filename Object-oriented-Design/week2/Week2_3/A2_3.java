import java.util.Scanner;
public class A2_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int i;
		int j;
		int n;
		int total = 0;
		
		System.out.println("random() 으로 발생한 수: ");
		for(i = 0; i < 10; i++) {
			for(j = 0; j < 10; j++) {
				n = (int)(Math.random() * 100) + 1;
				if(n < 10)
					System.out.print("   ");
				else if(n < 100)
					System.out.print("  ");
				else
					System.out.print(" ");
				System.out.print(n);
				total += n;
			}			
			System.out.println();
		}
		System.out.println("합계: " + total);
		System.out.println("평균: " + (double)(total / 100));
	}

}
