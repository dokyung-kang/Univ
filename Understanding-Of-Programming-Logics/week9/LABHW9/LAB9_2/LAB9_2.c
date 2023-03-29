#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int yourAnswer, answer, n1, n2;
	char ch;

	srand(time(NULL));
	do
	{
		n1 = rand() % 100;
		n2 = rand() % 100;
		answer = n1 + n2;

		printf("%d + %d =", n1, n2);
		scanf("%d", &yourAnswer);

		if (answer == yourAnswer)
			printf("Your answer is right.\n");
		else
		{
			printf("Your answer is wrong.\n");
			printf("%d is the right answer\n", answer);
		}

		while (getchar() != '\n');

		printf("Do you want to play again?(y/n)");
		scanf("%c", &ch);
	} while (ch == 'y');
}