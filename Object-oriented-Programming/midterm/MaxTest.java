import java.util.*;
public class MaxTest {

	public static void main(String[] args) {
		findMax();

	}
	public static void findMax() {

		float n1;
		float n2;
		float n3;
		float n4;
		float n5;
		float total = 0;
		float max;
		int i = 0;
		Scanner sc = new Scanner(System.in);
		ArrayList<Float> list = new ArrayList<>();
		n1 = sc.nextFloat();
		n2 = sc.nextFloat();
		n3 = sc.nextFloat();
		n4 = sc.nextFloat();
		n5 = sc.nextFloat();
		list.add(n1);
		list.add(n2);
		list.add(n3);
		list.add(n4);
		list.add(n5);
		max = list.get(0);
		for (float a: list) {
			total += list.get(i);
			if(max < list.get(i))
				max = list.get(i);
			i++;
		}
		System.out.println(total);
		System.out.println(max);
	}
	

}
