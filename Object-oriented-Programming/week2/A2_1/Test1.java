import java.util.Scanner;

public class Test1 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.print("�������� ������ �Է��Ͻÿ�: ");
		
		int orange = sc.nextInt();
		
		System.out.println(orange / 10 + "�ڽ��� �ʿ��ϰ� " + orange % 10 + "���� �����ϴ�.");
	}
}
