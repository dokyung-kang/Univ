
public class Bread extends Food {
	int num;
	
	public Bread(String name, int price, int num) {
		this.setName(name);
		this.setPrice(price);
		
		this.num = num;
	}
	
	public void setNum(int num) {
		this.num = num;
	}
	public int getNum() {
		return num;
	}
}
