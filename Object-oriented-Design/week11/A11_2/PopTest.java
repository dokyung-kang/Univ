import java.util.*;
public class PopTest{

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String country;
		int population;
		String maxC = "";
		int maxP = 0;
		int i;
		
		Map<String, Integer> map = new HashMap<String, Integer>();
		System.out.println("나라 이름과 인구를 3개 입력하세요. (예: Korea 5000)");
		for(i = 0; i < 3; i++) {
			System.out.println(i + 1 + ". 나라 이름, 인구>> " );
			country = sc.next();
			population = sc.nextInt();
			map.put(country, population);
		}
		for(String key: map.keySet()) {
			int p = map.get(key);
			if(maxP < p) {
				maxC = key;
				maxP = p;
			}
		}
		System.out.println("제일 인구가 많은 나라는 (" + maxC + ", " + maxP + ")");
	}

}
