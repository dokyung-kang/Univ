import java.util.*;
public class BookTest {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num;
		String title;
		String author;
		String name;
		int i;
		
		System.out.print("å�� �Ǽ�>>");
		num = sc.nextInt();
		sc.nextLine();
		
		Book[] b = new Book[num];
		
		for(i = 0; i < b.length; i++) {
			System.out.print("����>>");
			title = sc.nextLine();
			System.out.print("����>>");
			author = sc.nextLine();
			b[i] = new Book(title, author);
		}
		for(i = 0; i < b.length; i++)
			System.out.print(b[i].toString());
		System.out.println();
		System.out.print("ã������ å�� ������>>");
		name = sc.nextLine();
		for(i = 0; i < b.length; i++) {
			if(name.equals(b[i].getTitle())) {
				System.out.println("���ڴ� : " + b[i].getAuthor());
				break;
			}
		}
		if(i == b.length)
			System.out.println("ã������ å�� �����ϴ�.");
	}

}
