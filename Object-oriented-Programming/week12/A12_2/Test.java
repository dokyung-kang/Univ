import java.util.*;
public class Test {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x; 
		int y;
		int[] list = new int[3];
		System.out.println("���� ���Ϸ��� �μ��� �Է��Ͻÿ�");
		x = sc.nextInt();
		y = sc.nextInt();
		GoodCalc c = new GoodCalc();
		System.out.println("��: " + c.add(x,  y));
		System.out.println("��: " + c.sub(x,  y));
		list[0] = (int)(Math.random() * 10);
		list[1] = (int)(Math.random() * 10);
		list[2] = (int)(Math.random() * 10);
		System.out.println("�迭{" + list[0] + "," + list[1] + "," + list[2] + "}�� ���: " + c.avg(list));
		

	}

}
