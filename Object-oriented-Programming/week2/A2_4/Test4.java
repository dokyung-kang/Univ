import java.util.Scanner;

public class Test4 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.print("ȭ���µ��� �Է��Ͻÿ�: ");
		
		double f = sc.nextDouble();
		double c = (f - 32) / 1.8;
		
		System.out.println("�����µ��� " + c);
	}

}
