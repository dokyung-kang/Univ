
public class Gold extends Customer{
	double saleRatio;
	double salePrice;
	
	Gold() {
		
	}
	Gold(String name){
		this.customerName = name;
		saleRatio = 0.1;
		bonusRatio = 0.02; 
	}
	void calcPrice(int price) {
		salePrice = price * saleRatio;
		this.price = (int)(price - salePrice);
		bonusPoint += this.price * bonusRatio;
	}
	void showCustomerInfo() {
		System.out.println(customerName + " ���� ���αݾ��� " + (int)(salePrice) + "��, ���ұݾ��� " + price + "�Դϴ�.");
		System.out.println("�����Ǵ� ���ʽ�����Ʈ�� " + bonusPoint + "���Դϴ�.");
	}
}
