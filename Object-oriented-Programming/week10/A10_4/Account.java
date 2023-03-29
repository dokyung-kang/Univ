
public class Account {
	private int accountNumber;
	private int owner;
	private int balance;
	
	void deposit (int accountNumber) {
		this.accountNumber = accountNumber;
		balance = accountNumber;
	}
	void withdraw (int owner) {
		balance -= owner;
	}
	void transfer (Account myAccount1, Account myAccount2, int balance) {
		myAccount1.balance -= balance;
		myAccount2.balance += balance;
	}
	public String toString() {
		return "현재 잔액은 " + balance + "입니다.";
	}
}
