import java.util.Scanner;

public class Test4 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.print("È­¾¾¿Âµµ¸¦ ÀÔ·ÂÇÏ½Ã¿À: ");
		
		double f = sc.nextDouble();
		double c = (f - 32) / 1.8;
		
		System.out.println("¼·¾¾¿Âµµ´Â " + c);
	}

}
