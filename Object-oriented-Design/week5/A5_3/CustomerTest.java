import java.util.*;
public class CustomerTest {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String grade;
		String name;
		int id;
		int price;
		int i;
		
		System.out.println(">>���� �����(s/v/g)");
		grade = sc.next();
		System.out.println(">>���� �̸���?");
		name = sc.next();
		System.out.println(">>������ ������?");
		price = sc.nextInt();
		
		if(grade.equals("s")) {
			Customer silver = new Customer(name);
			silver.calcPrice(price);
			silver.showCustomerInfo();
		}
		else if(grade.equals("v")) {
			System.out.println(">>���� ������?");
			id = sc.nextInt();
			VIPCustomer vip = new VIPCustomer(name, id);
			vip.calcPrice(price);
			vip.showCustomerInfo();
		}
		else if(grade.equals("g")) {
			Gold gold = new Gold(name);
			gold.calcPrice(price);
			gold.showCustomerInfo();
		}
	}
}
