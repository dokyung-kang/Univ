
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
		System.out.println(customerName + " ���� ���ұݾ��� " + price + "�Դϴ�.");
		System.out.println("�����Ǵ� ���ʽ�����Ʈ�� " + bonusPoint + "���Դϴ�.");
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
