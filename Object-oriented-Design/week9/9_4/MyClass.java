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
		
		System.out.print("������ �Է��ϼ���>>");
		n1 = sc.nextInt();
		System.out.print("�Ǽ��� �Է��ϼ���>>");
		n2 = sc.nextFloat();
		
		System.out.print(n1 + "�� Ŭ�����̸�: ");
		MyClass.a(n1);
		System.out.println();
		System.out.print(n2 + "�� Ŭ�����̸�: ");
		MyClass.a(n2);
	}

}
