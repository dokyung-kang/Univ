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
		System.out.println("���� �̸��� �α��� 3�� �Է��ϼ���. (��: Korea 5000)");
		for(i = 0; i < 3; i++) {
			System.out.println(i + 1 + ". ���� �̸�, �α�>> " );
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
		System.out.println("���� �α��� ���� ����� (" + maxC + ", " + maxP + ")");
	}

}
