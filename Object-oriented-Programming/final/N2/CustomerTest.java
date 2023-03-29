
public class CustomerTest {

	public static void main(String[] args) {
		Customer gold = new Gold();
		Customer silver = new Silver();
		Customer guest = new Guest();
		
		gold.sale();
		silver.sale();
		guest.sale();

	}

}
