import java.util.*;
public class A10_1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		Movie[] list = new Movie[2];
		
		for (int i = 0; i < list.length; i++) {
			System.out.print("��ȭ����: ");
			String title = sc.nextLine();
			System.out.print("��ȭ����: ");
			String director = sc.nextLine();
			
			list[i] = new Movie(title, director);
		}
		for (int i = 0; i < list.length; i++) {
			System.out.println(list[i].toString());
		}

	}

}
