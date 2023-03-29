import java.util.*;
public class MyClass<T> {

	public static <T> void a(T b) {
		T name;
		name = b;
		
		System.out.print(name.getClass().getName());
				
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Integer n1;
		Float n2;
		
		System.out.print("정수를 입력하세요>>");
		n1 = sc.nextInt();
		System.out.print("실수를 입력하세요>>");
		n2 = sc.nextFloat();
		
		System.out.print(n1 + "의 클래스이름: ");
		MyClass.a(n1);
		System.out.println();
		System.out.print(n2 + "의 클래스이름: ");
		MyClass.a(n2);
	}

}
