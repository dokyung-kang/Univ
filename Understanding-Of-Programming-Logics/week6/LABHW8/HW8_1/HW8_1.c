#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, result;
	int answer = 0;

	printf("몇 단을 연습하겠습니다?: ");
	scanf("%d", &n);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = ", n, i);
		scanf("%d", &result);

		if (n * i == result)
			answer++;
	}
	printf("%d 단의 구구단에서 % d 개를 맞았습니다\n", n, answer);

	return 0;
}



/*
답

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, yourAnswer, answer, count;

	printf("몇 단을 연습하겠습니다?: ");
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
	printf("%d 단의 구구단에서 % d 개를 맞았습니다\n", n, count);

	return 0;
} 
*/