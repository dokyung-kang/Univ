
public class Gold extends Customer{
	public void sale() {
		System.out.println("Gold");
		System.out.println("잔액: " + (int)(10000 * 0.1) + "원");
		System.out.println("상품가격: " + (int)(10000 - 10000 * 0.1) + "원");
	}
}
