import java.util.*;
public class A5_2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int i;
		int seat[] = new int[5];
		int cnt = 0;
		int s;
		
		for(i = 0; i < seat.length; i++)
			seat[i] = 0;
		System.out.println("-------------------------");
		System.out.println("1 2 3 4 5");
		System.out.println("-------------------------");
		for(i = 0 ; i < seat.length; i++)
			System.out.print(seat[i] + " ");
		System.out.println();
		while(cnt != 5) {
			System.out.print("�����Ϸ��� �¼���ȣ�� �Է��ϼ���: ");
			s = sc.nextInt();
			if(seat[s - 1] != 0) 
				System.out.println("�̹� ����Ǿ����ϴ�.");
			else {
				System.out.println("����Ǿ����ϴ�.");
				cnt++;
				seat[s - 1] = 1;
			}
			System.out.println("-------------------------");
			System.out.println("1 2 3 4 5");
			System.out.println("-------------------------");
			for(i = 0 ; i < seat.length; i++)
				System.out.print(seat[i] + " ");
			System.out.println();
		}
		System.out.println("�����Դϴ�.");
	}

}
