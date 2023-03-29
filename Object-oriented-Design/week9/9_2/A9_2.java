import java.util.*;
public class A9_2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str;
		int cnt;
		int cntZ;
		System.out.println("한줄로 문장을 입력하세요. (종료는 exit을 입력) >>");
		str = sc.nextLine();
		while(!str.equals("exit")) {
			cnt = 0;
			cntZ = 0;
			StringTokenizer s = new StringTokenizer(str, " ", true);
			while(s.hasMoreTokens()) {
				if(s.nextToken().equals(" "))
					cntZ++;
				else
					cnt++;
			}	
			System.out.println("어절 개수는 " + cnt);
			System.out.println("공백의 개수는" + cntZ);
			System.out.println("한줄로 문장을 입력하세요. (종료는 exit을 입력 >>");
			str = sc.nextLine();
		}
		System.out.println("종료합니다...");
	}

}
