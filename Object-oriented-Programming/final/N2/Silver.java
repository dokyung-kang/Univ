
public class Silver extends Customer{
	public void sale() {
		System.out.println("Silver");
		System.out.println("�ܾ�: " + (int)(10000 * 0.05) + "��");
		System.out.println("��ǰ����: " + (int)(10000 - 10000 * 0.05) + "��");
	}


}
