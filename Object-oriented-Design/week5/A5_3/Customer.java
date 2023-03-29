
public class Customer {
	protected String customerName;
	protected String customerGrade;
	int bonusPoint = 0;
	double bonusRatio = 0.01;
	int price;
	
	public Customer() {
	}
	public Customer(String customerName) {
		this.customerName = customerName;
		customerGrade = "silver";
		bonusRatio = 0.01;
	}
	void calcPrice(int price) {
		this.price = price;
		bonusPoint += this.price * bonusRatio;
	}
	void showCustomerInfo() {
		System.out.println(customerName + " 님의 지불금액은 " + price + "입니다.");
		System.out.println("적립되는 보너스포인트는 " + bonusPoint + "원입니다.");
	}
	public void setName(String name) {
		customerName = name;
	}
	public String getName() {
		return customerName;
	}
	public void setGrade(String grade) {
		customerGrade = grade;
	}
	public String getGrade() {
		return customerGrade;
	}
}
