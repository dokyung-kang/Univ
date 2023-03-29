import java.util.*;
public class a4_5 {

	public static void main(String[] args) {
		double total = 0;
		double max = -99;
		int i = 0;
		ArrayList<Double> list = new ArrayList<>();
		list.add(1.0);
		list.add(2.0);
		list.add(3.0);
		list.add(4.0);
		for(double arr : list) {
			System.out.print(arr + "  ");
			total += list.get(i);
			if (max < list.get(i))
				max = list.get(i++);
		}
		System.out.print("\n");
		System.out.println("합은 " + total);
		System.out.println("최댓값은 " + max);	
	}

}
