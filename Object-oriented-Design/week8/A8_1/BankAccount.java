
public class BankAccount {
	int balance;

	void deposit(int n) throws NegativeBalanceException{
		if(n < 0)
			throw new NegativeBalanceException("음수 입금액");
		else {
			balance += n;
			System.out.println("정상 입금 처리=> 인출액: " + n + ", 잔액: " + balance);
		}
	}
	
	void withdraw(int n) throws NegativeBalanceException{
		if(n > balance)
			throw new NegativeBalanceException("잔고가 부족합니다");
		else if(n < 0)
			throw new NegativeBalanceException("잘못된 금액");
		else {
			balance -= n;
			System.out.println("정상 출금 처리=> 인출액: " + n + ", 잔액: " + balance);
		}
	}	
	
	public void setBalance(int balance) {
		this.balance = balance;
	}
	
	public int getBalance() {
		return balance;
	}
	
}
