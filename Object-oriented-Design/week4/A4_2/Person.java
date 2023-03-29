
public class Person implements Comparable{
	String name;
	int height;
	
	public Person() {
		
	}
	
	public Person(String name, int height) {
		this.name = name;
		this.height = height;
	}
	
	public int compareTo(Object obj) {
		Person p = (Person) obj;
		if(height < p.height)
			return -1;
		else if(height > p.height)
			return 1;
		else
			return 0;
	}
}
