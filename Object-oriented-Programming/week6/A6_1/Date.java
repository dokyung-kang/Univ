
public class Date {
	int year;
	int month;
	int day;
	
	public Date(int year, int month, int day) {
		this.year = year;
		this.month = month;
		this.day = day;
	}
	
	void print() {
		System.out.print("당신의 생일은 " + year + "년" + month + "월" + day + "일 이네요!");
	}
}
