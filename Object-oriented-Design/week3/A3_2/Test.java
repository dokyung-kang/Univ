import java.util.*;
public class Test {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String title;
		int page;
		String author;
		String date;
		Magazine m;
		
		System.out.print("잡지 이름은? ");
		title = sc.nextLine();
		System.out.print("페이지수는? ");
		page = sc.nextInt();
		sc.nextLine();
		System.out.print("저자는? ");
		author = sc.nextLine();
		System.out.print("발매일은?");
		date = sc.nextLine();
		m = new Magazine(title, page, author, date);
		System.out.println("책 이름 : " + m.title);
		System.out.println("페이지수 : " + m.page);
		System.out.println("저자 : " + m.author);
		System.out.println("발매일 : " + m.date);
		
	}

}
