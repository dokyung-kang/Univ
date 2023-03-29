import java.util.*;
public class a3_4 {

	public static void main(String[] args) {
		int i = 0;
		int j = 0;
		int num;
		int total = 0;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("구하려는 범위의 숫자를 입력하세요: ");
		num = sc.nextInt();
		
		while(i <= num)
		{

			if (i % 3 == 0) {
				System.out.print(i + "\t");
				total += i;
				j++;			
				if (j % 5 == 0) {
					System.out.print("\n");
			    }
			}		
			i++;
		}
		System.out.print("\n");
		System.out.print("0부터 " + num +"까지의 3의 배수의 합: " + total);
	}
}
