import java.util.*;
public class PersonTest {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Person[] array;
		String n;
		int h;
		
		array = new Person[3];
		array[0] = new Person("홍길동", 180);
		array[1] = new Person("이길동", 170);
		array[2] = new Person("김길동", 190);
		
		System.out.println("[제일 키 큰 사람]");
		n = array[getMax(array)].name;
		h = array[getMax(array)].height;
		System.out.println("이름 : " + n + ", height : " + (double)h);
	}
	public static int getMax(Person[] array) {
		int maxI = 0;
		int m = 0;
		int i;
		
		for(i = 0; i < array.length; i++) {
			m = array[0].compareTo(array[i]);
			if(m == -1)
				maxI = i;
		}
		return maxI;
	}
}
