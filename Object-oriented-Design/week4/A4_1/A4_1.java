import java.util.*;
public class A4_1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		int num;
		String name;
		int i;
		
		System.out.print("�迭�� ũ���>>");
		n = sc.nextInt();
		
		Student s[] = new Student[n];
		
		for(i = 0; i < s.length; i++) {
			System.out.print("�й�>>");
			num = sc.nextInt();
			sc.nextLine();
			System.out.print("�̸�>>");
			name = sc.nextLine();
			s[i] = new Student(num, name);
		}
		
		Arrays.sort(s);
		for(Student stu : s)
			System.out.println("�й� = " + stu.getNum() + ", �̸� = " + stu.getName());
	}

}
