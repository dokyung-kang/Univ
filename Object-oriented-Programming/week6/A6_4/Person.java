
public class Person {
	String name;
	float height;
	float weight;
	
	public Person() {
		name = "ȫ�浿";
		height = 163;
		weight  = 48.5F;
	}
	
	public Person(String name, float height, float weight) {
		this.name = name;
		this.height = height;
		this.weight = weight;
	}
	
	void print() {
		System.out.println("�̸�: " + name + ", Ű: " + height + ", ������: " + weight);
	}
}
