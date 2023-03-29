
public class Guest extends Customer{
	public void sale() {
		System.out.println("Guest");
		System.out.println("잔액: " + (int)10000 * 0 + "원");
		System.out.println("상품가격: " + (int)(10000 - 10000 * 0) + "원");
	}

}
