
public class GoodCalc extends Calculator{
	
	public int add(int x, int y) {
		return x + y;
	}
	public int sub(int x, int y) {
		return x - y;
	}
	public double avg(int[] list) {
		return (double)(list[0] + list[1] + list[2]) / 3;
	}
}
