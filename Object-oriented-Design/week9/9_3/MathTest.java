import java.util.*;
public class MathTest {

	public static void main(String[] args) {
		MyMath<Number> n = new MyMath<Number>();
		int[] list = {1, 2, 3, 4, 5, 6};
		int i;
		
		for(i = 0; i < list.length; i++) 
			n.setAverage(list[i]);
		
		System.out.print("�迭 ");
		System.out.print(Arrays.toString(list));
		System.out.print("�� ��� : ");
		System.out.print(n.getAverage());
	}

}
