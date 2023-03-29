
public class Food {
	String name;
	int price;
	
	public Food () {
		
	}
	public Food (String name, int price) {
		this.name = name;
		this.price = price;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	public String getName() {
		return name;			
	}
	public void setPrice(int price) {
		this.price = price;
	}
	public int getPrice() {
		return price;
	}
	
	public String toString() {
		return name + ", " + price;
	}
}
