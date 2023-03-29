import java.util.*;
public class A4_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int size = 1;
		int num;
		int i;
		String[][] members = new String[size][2];
		
		do {
			System.out.println("-------------------------------------------");
			System.out.println(" 1.회원수 | 2.정보입력 | 3.회원리스트 | 4.종료");
			System.out.println("-------------------------------------------");
			System.out.print("선택>");
			num = sc.nextInt();
			sc.nextLine();
		switch(num) {
			case 1:
				System.out.print("회원수>");
				size = sc.nextInt();
				sc.nextLine();
				members = new String[size][2];
				break;
			case 2:
				for(i = 0; i < size; i++) {
					System.out.print("이름을 입력하세요 : ");
					members[i][0] = sc.nextLine();
					System.out.print("전화번호를 입력하세요 : ");
					members[i][1] = sc.nextLine();
				}
				break;
			case 3:
				System.out.println("** 회원 정보 **");
				for(i = 0; i < size; i++)
					System.out.println(members[i][0] + " " + members[i][1]);
				break;
			}
		}while(num != 4);
	}

}
