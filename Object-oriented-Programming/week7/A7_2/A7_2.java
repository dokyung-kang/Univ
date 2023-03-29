
public class A7_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int cnt = 0;
		Dice d1 = new Dice();
		Dice d2 = new Dice();
		 do {
			d2.roll();
			d1.roll();
			cnt++;
			System.out.println("주사위1 = " + d1.getValue() + "  주사위2 = " + d2.getValue());
		} while (d1.getValue() + d2.getValue() != 2);
		System.out.print("(" + d1.getValue() + ", " + d2.getValue() + ")이 나오는데 걸린 횟수= " + cnt);
	}

}
