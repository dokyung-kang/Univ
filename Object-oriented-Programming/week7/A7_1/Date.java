
public class Date {
	private int year;
	private int month;
	private int day;
	
	public int getYear() {
		return year;
	}
	public void setYear(int year) {
		this.year = year;
	}
	public int getMonth() {
		return month;
	}
	public void setMonth(int month) {
		this.month = month;
	}
	public int getDay() {
		return day;
	}
	public void setDay(int day) {
		this.day = day;
	}
	
	void print() {
		System.out.println("당신의 생일은 " + getYear() + "년 " + getMonth() + "월 " + getDay() + "일입니다.");
		System.out.print("현재 나이는 " + (2021 - getYear()));		
	}
}
