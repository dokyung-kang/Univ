import java.util.*;
public class DogTest {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Dog[] dogArray = new Dog[3];
		for (int i = 0; i < dogArray.length; i++) {
			System.out.print("Pet의 이름을 입력하세요: ");
			String name = sc.nextLine();
			System.out.print("Pet의 종류를 입력하세요: ");
			String type = sc.nextLine();
			dogArray[i] = new Dog();
			dogArray[i].setName(name);
			dogArray[i].setType(type);
		}

		System.out.println("**for문**");
		for (int i = 0; i < dogArray.length; i++) {
			System.out.println(dogArray[i].toString());
		}
		System.out.println("**foreach문**");
		for (Dog list : dogArray)
			System.out.println(list.toString());
	}


}
