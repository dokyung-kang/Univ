import java.util.*;
public class Member implements Comparable{
	String name;
	
	Member(){
		
	}
	Member(String name){
		this.name = name;
	}
	public int compareTo(Object obj) {
		Member other = (Member) obj;
		return (this.name.compareTo(other.name)) * -1;
	}
	public String toString() {
		return name;
	}
}
