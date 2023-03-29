import java.io.*;
import java.util.*;
public class A13_2 {

	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		int go;
		String n;
		String name;
		String phone;
		String email;
		String findN;
		int isH = 0;
		
		try{
			PrintWriter result = new PrintWriter("c:/Temp/result.txt");
			do {
				System.out.print("사용자 번호를 입력하세요>>");
				n = sc.next();
				System.out.print("사용자 이름을 입력하세요>>");
				name = sc.next();
				System.out.print("사용자 전화번호를 입력하세요>>");
				phone = sc.next();
				System.out.print("사용자 이메일을 입력하세요>>");
				email = sc.next();
				System.out.print("입력이 끝났으면 0, 계속 입력하려면 1을 입력하세요>>");
				go = sc.nextInt();
					result.print(n);
					result.print(",");
					result.print(name);
					result.print(",");
					result.print(phone);
					result.print(",");
					result.print(email);
					result.print(",");
					result.print("---");
					//result.print(",");
					result.flush();
			} while(go == 1);
			File file = new File("c:/Temp/result.txt");
			System.out.print("검색할 사용자 번호를 입력하세요>>");
			findN = sc.next();
			String num;
			String sen = "";
			Scanner scan1 = new Scanner(file);
			Scanner scan2 = new Scanner(sen);
			scan1.useDelimiter("---");
			while(scan1.hasNext()) {
				sen = scan1.next();
				scan2 = new Scanner(sen);
				scan2.useDelimiter(",");
				while(scan2.hasNext()) {
					num = scan2.next();
					if(num.equals(findN)) {
						isH = 1;
						scan2.next();
						System.out.println("사용자 번호 " + findN + "의 전화번호는 " + scan2.next() + "입니다.");
						break;
					}
					
				}
				if(isH == 1)
					break;
			}
		} catch(IOException e) {
			e.printStackTrace();
		}
		
	}

}
