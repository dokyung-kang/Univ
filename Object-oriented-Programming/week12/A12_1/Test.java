import java.util.*;
public class Test {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Employee e0 = new Employee();
		SalariedEmployee e1 = new SalariedEmployee();
		HourlyEmployee e2 = new HourlyEmployee();
		
		
		System.out.print("�̸���?");
		e0.setName(sc.next());
		System.out.print("������ȣ��?");
		e0.setId(sc.nextInt());
		System.out.print("������?");
		e0.setPosition(sc.next());
		System.out.println(e0.toString());
		System.out.println();
		
		System.out.print("�̸���?");
		e1.setName(sc.next());
		System.out.print("������ȣ��?");
		e1.setId(sc.nextInt());
		System.out.print("������?");
		e1.setPosition(sc.next());
		System.out.print("������?");
		e1.setMonthly(sc.nextInt());
		System.out.println(e1.toString());
		System.out.println();
		
		System.out.print("�̸���?");
		e2.setName(sc.next());
		System.out.print("������ȣ��?");
		e2.setId(sc.nextInt());
		System.out.print("������?");
		e2.setPosition(sc.next());
		System.out.print("�ñ���?");
		e2.setRate(sc.nextInt());
		System.out.print("���� �ð���?");
		e2.setHours(sc.nextInt());
		System.out.println(e2.toString());
		
	}

}
