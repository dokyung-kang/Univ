#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
// n�� ��� 1�� �Ǿ������� �� ������ ��ȯ, �ƴϸ� 0�� ��ȯ
int isAllOnes(int n)
{
	int count = 0, last;
	while (n != 0) {
		last = n % 10;
		if (last != 1) return 0;
		n /= 10;
		count++;
	}
	return count;
}
int main(void)
{
	int a, b, c;
	int number;

	//printf("Enter ��:");
	scanf("%d", &a);

	c = a;
	b = 1;
	while (!(number = isAllOnes(c))) {
		c = a * b;
		printf("b�� c�� %d, %d\n", b, c);
		b++;
	}

	printf("%d\n", number);
}
*/

///*�� ���� ȿ������ ����: better --> �̰ɷ� �������Ѵ�
#include <stdio.h>
int main(void)
{
	int num, one = 1, count = 0;
	int remainder = -1;

	scanf("%d", &num);

	// �Ʒ��� �ڵ忡 �ʿ��� �κп� �ڵ带 ����

	while (remainder != 0)
	{
		//�ݺ��� ����Ǹ鼭 one�� 11, 111, 1111�� ��ȭ�ϸ鼭
		//num���� ����� remainder ����ϰ� count�� ���
		if (one % num == 0)
			remainder = 0;
		one = one * 10 + 1;
		count++;
	}
	// printf("%d %d\n", one, one / num); �׽�Ʈ�� ���
	printf("%d\n", count);
}
//*/