
public class MyMath<T> {
	T n;
	Integer total = 0;
	Integer cnt = 0;
	
	void setAverage(T num) {
		total += (int)num;
		cnt++;
	}
	double getAverage() {
		return total / cnt.doubleValue();
	}
}
