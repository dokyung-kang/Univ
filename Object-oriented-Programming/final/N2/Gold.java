
public class Gold extends Customer{
	public void sale() {
		System.out.println("Gold");
		System.out.println("�ܾ�: " + (int)(10000 * 0.1) + "��");
		System.out.println("��ǰ����: " + (int)(10000 - 10000 * 0.1) + "��");
	}
}
