
public class VIPCustomer extends Customer{
	private int agentID;
	double saleRatio;
	double salePrice;
	
	VIPCustomer() {
		
	}
	VIPCustomer(String name, int agentID){
		this.customerName = name;
		saleRatio = 0.1;
		bonusRatio = 0.05; 
		this.agentID = agentID;
	}
	void calcPrice(int price) {
		salePrice = price * saleRatio;
		this.price = (int)(price - salePrice);
		bonusPoint += this.price * bonusRatio;
	}
	void showCustomerInfo() {
		System.out.println(customerName + " 님의 할인금액은 " + (int)(salePrice) + "원, 지불금액은 " + price + "입니다.");
		System.out.println("적립되는 보너스포인트는 " + bonusPoint + "원입니다.");
		System.out.println("고객님 담당의 전문 상담원 ID는 " + agentID + "입니다.");
	}
	public void setAgentID() {
	}
	public int getAgentID() {
		return agentID;
	}
}
