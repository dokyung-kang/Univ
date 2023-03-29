import java.util.*;
public class BookTest {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num;
		String title;
		String author;
		String name;
		int i;
		
		System.out.print("책의 권수>>");
		num = sc.nextInt();
		sc.nextLine();
		
		Book[] b = new Book[num];
		
		for(i = 0; i < b.length; i++) {
			System.out.print("제목>>");
			title = sc.nextLine();
			System.out.print("저자>>");
			author = sc.nextLine();
			b[i] = new Book(title, author);
		}
		for(i = 0; i < b.length; i++)
			System.out.print(b[i].toString());
		System.out.println();
		System.out.print("찾으려는 책의 제목은>>");
		name = sc.nextLine();
		for(i = 0; i < b.length; i++) {
			if(name.equals(b[i].getTitle())) {
				System.out.println("저자는 : " + b[i].getAuthor());
				break;
			}
		}
		if(i == b.length)
			System.out.println("찾으려는 책이 없습니다.");
	}

}
