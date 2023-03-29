
public class a5_2 {

	public static void main(String[] args) {
		show();
		System.out.println("메소드 호출하기 전");
		show();
		System.out.println("메소드 호출한 후");
		show();
	}
	
	public static void show() {
		for (int i = 0; i < 10; i++) {
			System.out.print("*");
		}
		System.out.println();
	}

}
