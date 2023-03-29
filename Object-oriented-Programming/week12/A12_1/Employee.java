
public class Employee {
	private String name;
	private int id;
	private String position;
	
	public Employee() {
		name = "모름";
		id = -1;
		position = "모름";
	}
	public Employee (String name, int id) {
		this.name = name;
		this.id = id;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	public String getName() {
		return name;
	}
	
	public void setId(int id) {
		this.id = id;
	}
	public int getId() {
		return id;
	}
	
	public void setPosition(String position) {
		this.position = position;
	}
	public String getPosition() {
		return position;
	}
	
	public int computeSalary() {
		return -1;
	}
	
	public String toString() {
		return name + "(" + position + "," + id + ")";
	}
}
