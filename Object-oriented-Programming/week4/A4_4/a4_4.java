import java.util.*;
public class a4_4 {

	public static void main(String[] args) {
		double total = 0;
		double max = -99;
		double[] list = { 1.0, 2.0, 3.0, 4.0 };
		System.out.print("toString() �� ���: ");
		System.out.println(Arrays.toString(list));
		for (double arr : list) {
			System.out.print(arr + "  ");
			total += arr;
			if (max < arr)
				max = arr;
		}
		System.out.print("\n");
		System.out.println("���� " + total);
		System.out.println("�ִ��� " + max);	
	}
}
