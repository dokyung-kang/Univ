import java.util.*;
public class A6_2 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int w;
		int h;
		
		System.out.print("사각형의 가로를 입력: ");
		w = sc.nextInt();
		System.out.print("사각형의 세로를 입력: ");
		h = sc.nextInt();
		sc.close();
		
		Rectangle r = new Rectangle(w, h);
		System.out.print("사각형의 넓이는 " + r.area() + "이다.");
	}

}
