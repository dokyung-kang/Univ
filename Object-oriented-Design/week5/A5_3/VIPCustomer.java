
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
		System.out.println(customerName + " ���� ���αݾ��� " + (int)(salePrice) + "��, ���ұݾ��� " + price + "�Դϴ�.");
		System.out.println("�����Ǵ� ���ʽ�����Ʈ�� " + bonusPoint + "���Դϴ�.");
		System.out.println("���� ����� ���� ���� ID�� " + agentID + "�Դϴ�.");
	}
	public void setAgentID() {
	}
	public int getAgentID() {
		return agentID;
	}
}
