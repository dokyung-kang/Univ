import java.util.*;
public class A11_1 {

	public static void main(String[] args) {
		boolean bb0;
		boolean bb1;
		boolean bb2;
		
		Scanner sc = new Scanner(System.in);
		
		BankAccount b0 = new BankAccount();
		BankAccount b1 = new BankAccount("소년", 2000);
		BankAccount b2 = new BankAccount("아이유", 500, 3.25);
		
		System.out.println("은행 계좌 모두의 정보입니다.");
		System.out.println(b0.toString());
		System.out.println(b1.toString());
		System.out.println(b2.toString());
		
		System.out.println("\n계좌 " + b0.getAccNo1() + "-" + b0.getAccNo2() + "에 입금할 금액을 입력하세요: ");
		 bb0 = b0.deposit(sc.nextInt());
		if(bb0 == true)
			System.out.println("입금이 성공했습니다.");
		else
			System.out.println("입금이 실패했습니다.");
		
		System.out.println("\n은행 계좌 모두의 정보입니다.");
		System.out.println(b0.toString());
		System.out.println(b1.toString());
		System.out.println(b2.toString());

		System.out.println("\n계좌 " + b1.getAccNo1() + "-" + b1.getAccNo2() + "에서 출금할 금액을 입력하세요: ");
		 bb1 = b1.withdraw(sc.nextInt());
		if(bb1 == true)
			System.out.println("출금이 성공했습니다.");
		else
			System.out.println("출금이 실패했습니다.");
		
		System.out.println("\n은행 계좌 모두의 정보입니다.");
		System.out.println(b0.toString());
		System.out.println(b1.toString());
		System.out.println(b2.toString());

		System.out.println("\n계좌 " + b1.getAccNo1() + "-" + b1.getAccNo2() + "에서 " + 
		b2.getAccNo1() + "-" + b2.getAccNo2() + "으로 송금할 금액을 입력하세요: ");
		 bb2 = b2.transfer(b1, b2, sc.nextInt());
		if(bb2 == true)
			System.out.println("송금이 성공했습니다.");
		else
			System.out.println("송금이 실패했습니다.");
		
		System.out.println("\n은행 계좌 모두의 정보입니다.");
		System.out.println(b0.toString());
		System.out.println(b1.toString());
		System.out.println(b2.toString());
	}

}
