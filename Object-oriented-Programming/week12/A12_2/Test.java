import java.util.*;
public class Test {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x; 
		int y;
		int[] list = new int[3];
		System.out.println("합을 구하려는 두수를 입력하시오");
		x = sc.nextInt();
		y = sc.nextInt();
		GoodCalc c = new GoodCalc();
		System.out.println("합: " + c.add(x,  y));
		System.out.println("차: " + c.sub(x,  y));
		list[0] = (int)(Math.random() * 10);
		list[1] = (int)(Math.random() * 10);
		list[2] = (int)(Math.random() * 10);
		System.out.println("배열{" + list[0] + "," + list[1] + "," + list[2] + "}의 평균: " + c.avg(list));
		

	}

}
