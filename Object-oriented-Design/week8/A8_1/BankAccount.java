
public class BankAccount {
	int balance;

	void deposit(int n) throws NegativeBalanceException{
		if(n < 0)
			throw new NegativeBalanceException("���� �Աݾ�");
		else {
			balance += n;
			System.out.println("���� �Ա� ó��=> �����: " + n + ", �ܾ�: " + balance);
		}
	}
	
	void withdraw(int n) throws NegativeBalanceException{
		if(n > balance)
			throw new NegativeBalanceException("�ܰ� �����մϴ�");
		else if(n < 0)
			throw new NegativeBalanceException("�߸��� �ݾ�");
		else {
			balance -= n;
			System.out.println("���� ��� ó��=> �����: " + n + ", �ܾ�: " + balance);
		}
	}	
	
	public void setBalance(int balance) {
		this.balance = balance;
	}
	
	public int getBalance() {
		return balance;
	}
	
}
