import java.util.*;
public class A8_1 {

	public static void main(String[] args) {
		BankAccount b = new BankAccount();
		try {
			b.deposit(100);
			b.withdraw(100);
			b.withdraw(100);
		}catch (NegativeBalanceException e) {
			e.printStackTrace();
		}
	}

}
