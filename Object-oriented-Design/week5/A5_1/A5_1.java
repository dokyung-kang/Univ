import java.util.*;
public class A5_1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n1;
		int n2;
		String op;
		
		System.out.print("두 정수와 연산자를 입력하세요>> ");
		n1 = sc.nextInt();
		n2 = sc.nextInt();
		op = sc.next();

		if(op.equals("+")) {
			Add a = new Add();
			a.setValue(n1, n2);
			System.out.print(a.calculate());
		}
		else if(op.equals("-")) {
			Sub s = new Sub();
			s.setValue(n1, n2);
			System.out.print(s.calculate());
		}
		else if(op.equals("*")) {
			Mul m = new Mul();
			m.setValue(n1, n2);
			System.out.print(m.calculate());
		}
		else {
			Div d = new Div();
			d.setValue(n1, n2);
			System.out.print(d.calculate());
		}
	}

}
