
public class Person {
	String name;
	float height;
	float weight;
	
	public Person() {
		name = "È«±æµ¿";
		height = 163;
		weight  = 48.5F;
	}
	
	public Person(String name, float height, float weight) {
		this.name = name;
		this.height = height;
		this.weight = weight;
	}
	
	void print() {
		System.out.println("ÀÌ¸§: " + name + ", Å°: " + height + ", ¸ö¹«°Ô: " + weight);
	}
}
