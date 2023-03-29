
public class BreadTest {

	public static void main(String[] args) {
		Bread b1 = new Bread("도넛", 2000, 3);
		System.out.println(b1.toString());
		System.out.println("수량: " + b1.getNum());
		
		System.out.println("*************");
		
		Drink d1 = new Drink("콜라", 1500, "small");
		System.out.println(d1.toString());
		System.out.println("사이즈: " + d1.getSize());

	}

}
