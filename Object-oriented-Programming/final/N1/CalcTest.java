import java.util.*;
public class CalcTest {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x;
		int y;
		String o;
		
		System.out.println("�� ������ �����ڸ� �Է��Ͻÿ�.(ex. 80 4 /)");
		x = sc.nextInt();
		y = sc.nextInt();
		o = sc.next();
		switch(o) {
		case "+":
			Add add = new Add();
			add.calculate(x, y);
			break;
		case "-":
			Sub sub = new Sub();
			sub.calculate(x, y);
			break;
		case "*":
			Mul mul = new Mul();
			mul.calculate(x, y);
			break;
		case "/":
			Div div = new Div();
			div.calculate(x, y);
			break;
		default :
			System.out.println("�߸��� �������Դϴ�.");
			break;
		}
	}

}
