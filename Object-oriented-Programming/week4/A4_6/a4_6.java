import java.util.*;
public class a4_6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int i = 0;
		int n;
		int score;
		int total = 0;
		double avg;
		System.out.print("������ �Է¹޴� �л��� ����?: ");
		n = sc.nextInt();
		int[] list = new int[n];
		while (i < list.length) {
			System.out.print((i + 1) + "��° �л��� ������ �Է��ϼ���: ");
			score = sc.nextInt();
			list[i] = score;
			total += list[i];
			i++;
		}
		avg = total / list.length;
		System.out.println("�հ�: " + total);
		System.out.println("���: " + avg);
	}

}
