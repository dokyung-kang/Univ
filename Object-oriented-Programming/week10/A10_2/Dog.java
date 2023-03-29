
public class Dog {
	private String name;
	private String type;
	
	public Dog (String name, String type) {
		this.name = name;
		this.type = type;
	}
	public String getName() {
		return name;
	}
	public void setName() {
		
	}
	public String getType() {
		return type;
	}
	public void setType() {
		
	}
	public String toString() {
		return name + ", " + type;
	}
}
