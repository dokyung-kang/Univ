
public class BankAccount {
	private String name;
	private int accNo1 = (int)(1000 + 10 * Math.random());
	private int accNo2 = (int)(1000 + 10 * Math.random());
	private int balance;
	private double interest;

	BankAccount() {
		name = "¹æÅº";
		balance = 100;
		interest = 3.5;
	}
	BankAccount(String name, int balance) {
		this.setName(name);
		this.setBalance(balance);
		interest = 2.1;
	}
	BankAccount(String name, int balance, double interest) {
		this.setName(name);
		this.setBalance(balance);
		this.setInterest(interest);
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getName() {
		return name;
	}
	
	public void setAccNo1(int accNo1) {
		this.accNo1 = accNo1;
	}
	public int getAccNo1() {
		return accNo1;
	}

	public void setAccNo2(int accNo2) {
		this.accNo2 = accNo2;
	}
	public int getAccNo2() {
		return accNo2;
	}
	
	public void setBalance(int balance) {
		this.balance = balance;
	}
	public int getBalance() {
		return balance;
	}
	
	public void setInterest(double interest) {
		this.interest = interest;
	}
	public double getInterest() {
		return interest;
	}
	
	public boolean deposit(int money) {
		if(money >= 0) {
			balance += money;
			return true;
		}
		return false;
	}
	
	public boolean withdraw(int money) {
		if(balance >= money) {
			balance -= money;
			return true;
		}
		return false;
	}
	
	public static boolean transfer (BankAccount from, BankAccount to, int money) {
		if(from.withdraw(money) == true && to.deposit(money) == true)
			return true;
		else 
			return false;
	}
	
	public String toString() {
		return getAccNo1() + "-" + getAccNo2() + " ;; " + name + " ;; " + balance + " ;; " + interest + "%";
	}
}
