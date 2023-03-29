#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int studentAnswer, answer, n1, n2;

	srand(time(NULL));
	n1 = rand() % 100;
	n2 = rand() % 100;

	printf("%d + %d = ", n1, n2);
	
	answer = n1 + n2;
	scanf("%d", &studentAnswer);

	if (answer == studentAnswer)
		printf("Your answer is right.\n");
	else
	{
		printf("Your answer is wrong.\n");
		printf("%d is the right answer\n", answer);
	}
}