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
				System.out.print("����� ��ȣ�� �Է��ϼ���>>");
				n = sc.next();
				System.out.print("����� �̸��� �Է��ϼ���>>");
				name = sc.next();
				System.out.print("����� ��ȭ��ȣ�� �Է��ϼ���>>");
				phone = sc.next();
				System.out.print("����� �̸����� �Է��ϼ���>>");
				email = sc.next();
				System.out.print("�Է��� �������� 0, ��� �Է��Ϸ��� 1�� �Է��ϼ���>>");
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
			System.out.print("�˻��� ����� ��ȣ�� �Է��ϼ���>>");
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
						System.out.println("����� ��ȣ " + findN + "�� ��ȭ��ȣ�� " + scan2.next() + "�Դϴ�.");
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
