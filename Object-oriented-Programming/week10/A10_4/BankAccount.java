import java.util.*;
public class BankAccount {

	public static void main(String[] args) {
		Account myAccount1 = new Account();
		Account myAccount2 = new Account();
		
		System.out.print("myAccount1: ");
		myAccount1.deposit(10000);
		System.out.println(myAccount1.toString());
		System.out.print("myAccount2: ");
		myAccount2.deposit(30000);
		System.out.println(myAccount2.toString());
		System.out.print("myAccount2: ");
		myAccount2.withdraw(5000);
		System.out.println(myAccount2.toString());
		System.out.println("transfer(5000¿ø)");
		myAccount1.transfer(myAccount1, myAccount2, 5000);
		System.out.print("myAccount1: ");
		System.out.println(myAccount1.toString());
		System.out.print("myAccount2: ");
		System.out.println(myAccount2.toString());
		
	}

}
