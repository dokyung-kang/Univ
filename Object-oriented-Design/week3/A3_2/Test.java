import java.util.*;
public class Test {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String title;
		int page;
		String author;
		String date;
		Magazine m;
		
		System.out.print("���� �̸���? ");
		title = sc.nextLine();
		System.out.print("����������? ");
		page = sc.nextInt();
		sc.nextLine();
		System.out.print("���ڴ�? ");
		author = sc.nextLine();
		System.out.print("�߸�����?");
		date = sc.nextLine();
		m = new Magazine(title, page, author, date);
		System.out.println("å �̸� : " + m.title);
		System.out.println("�������� : " + m.page);
		System.out.println("���� : " + m.author);
		System.out.println("�߸��� : " + m.date);
		
	}

}
