import java.util.*;
public class A8_2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = 1;
		String[] d = {"��", "��", "ȭ", "��", "��", "��", "��"};

		System.out.print("������ �Է��ϼ���>>");
		while(true){
			try {
				n = sc.nextInt();
				System.out.println(d[n]);
			}catch(InputMismatchException e) {
				System.out.println("���! ���� �Է����� �ʾҽ��ϴ�.");
				sc.nextLine();
			}catch(Exception e) {
				if(n < 0) {
					System.out.println("���α׷� �����մϴ�...");
					break;
				}
				System.out.println("���! �˸��� ���� �Է����� �ʾҽ��ϴ�.");
				sc.nextLine();
			} 
			System.out.print("������ �Է��ϼ���>>");
		}
	}

}
