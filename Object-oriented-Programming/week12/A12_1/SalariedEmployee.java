
public class SalariedEmployee extends Employee{
	private int monthly;
	
	public SalariedEmployee() {
		
	}
	public SalariedEmployee(String name, int id) {
		this.setName(name);
		this.setId(id);
	}
	
	
	public void setMonthly(int monthly) {
		this.monthly = monthly;
	}
	public int getMonthly() {
		return monthly;
	}
	
	public int computeSalary() {
		return monthly * 12;
	}
	
	public String toString() {
		return super.toString() + "¿« ø¨∫¿¿∫ " + computeSalary();
		
	}
}
