import java.util.*;
public class A6_2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int w;
		int h;
		
		System.out.print("�簢���� ���θ� �Է�: ");
		w = sc.nextInt();
		System.out.print("�簢���� ���θ� �Է�: ");
		h = sc.nextInt();
		sc.close();
		
		Rectangle r = new Rectangle(w, h);
		System.out.print("�簢���� ���̴� " + r.area() + "�̴�.");
	}

}
