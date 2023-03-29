import java.util.Scanner;

public class Test3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.print("πﬁ¿∫ µ∑: ");
		int money = sc.nextInt();
		
		System.out.print("ªÛ«∞ ∞°∞›: ");
		int price = sc.nextInt();
		
		System.out.println("∫Œ∞°ºº: " + price / 10);
		System.out.println("¿‹µ∑: " + (money - price));
	}
}
