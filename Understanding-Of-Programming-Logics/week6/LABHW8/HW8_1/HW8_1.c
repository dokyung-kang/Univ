#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, result;
	int answer = 0;

	printf("�� ���� �����ϰڽ��ϴ�?: ");
	scanf("%d", &n);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = ", n, i);
		scanf("%d", &result);

		if (n * i == result)
			answer++;
	}
	printf("%d ���� �����ܿ��� % d ���� �¾ҽ��ϴ�\n", n, answer);

	return 0;
}



/*
��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, yourAnswer, answer, count;

	printf("�� ���� �����ϰڽ��ϴ�?: ");
	scanf("%d", &n);

	count 0;
	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = ", n, i);
		scanf("%d", &yourAnswer);

		answer = n * i;

		if (answer == yourAnswer)
			count++;
	}
	printf("%d ���� �����ܿ��� % d ���� �¾ҽ��ϴ�\n", n, count);

	return 0;
} 
*/