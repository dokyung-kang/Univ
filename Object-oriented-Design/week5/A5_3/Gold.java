
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
		System.out.println(customerName + " 님의 할인금액은 " + (int)(salePrice) + "원, 지불금액은 " + price + "입니다.");
		System.out.println("적립되는 보너스포인트는 " + bonusPoint + "원입니다.");
	}
}
