import java.util.*;
public class A2_1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int[] n = new int[5];
		String[] s = new String[5];
		int i;
		double total = 0;
		
		System.out.print("������ �Է��ϼ���: ");
		for (i = 0; i < 5; i++) 
			n[i] = sc.nextInt();
		for(int num : n)
			total += num;	
		System.out.println("���� " + total);

		System.out.print("�̸��� �Է��ϼ���: ");
		for (i = 0; i < 5; i++) 
			s[i] = sc.next();
		for(String str : s)	
			System.out.print(str + " ");
		
	
	}

}
