
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
		System.out.println("����� ������ " + getYear() + "�� " + getMonth() + "�� " + getDay() + "���Դϴ�.");
		System.out.print("���� ���̴� " + (2021 - getYear()));		
	}
}
