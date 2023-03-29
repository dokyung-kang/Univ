
public class Silver extends Customer{
	public void sale() {
		System.out.println("Silver");
		System.out.println("잔액: " + (int)(10000 * 0.05) + "원");
		System.out.println("상품가격: " + (int)(10000 - 10000 * 0.05) + "원");
	}


}
