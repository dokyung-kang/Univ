import java.util.*;
public class a5_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x;
		int y;
		System.out.print("������ �Է��ϼ���: ");
		x = sc.nextInt();
		System.out.print("������ �Է��ϼ���: ");
		y = sc.nextInt();
		sum(x, y);
	}	
	
	public static void sum(int a, int b) {
		int total;
		total = a + b;
		System.out.print(a + " + " + b + " = " + total);
	}

}
