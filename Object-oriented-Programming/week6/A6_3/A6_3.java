import java.util.*;
public class A6_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String n;
		int r;
		int a;
		
		System.out.print("�̸��� �Է��Ͻÿ�.: ");
		n = sc.next();
		System.out.print("�й��� �Է��Ͻÿ�.: ");
		r = sc.nextInt();
		System.out.print("���̸� �Է��Ͻÿ�.: ");
		a = sc.nextInt();
		sc.close();
		
		Student s = new Student(n, r, a);
		s.print();
	}

}
