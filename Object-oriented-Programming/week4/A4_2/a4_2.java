import java.util.*;

public class a4_2 {

	public static void main(String[] args) {
		int i;
		int total = 0;
		Scanner sc = new Scanner(System.in);
		for (i = 1; i <= 100; i++) 
			if ((i % 3) == 0 || (i % 4) == 0)
				total += i;
		System.out.print("3 �Ǵ� 4�� ����� ��=" + total);
	}
}
