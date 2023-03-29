#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int op, yourAnswer, answer, n1, n2;
	char ch;

	srand(time(NULL));

	do
	{
		op = rand() % 4;
		n1 = rand() % 100;
		n2 = rand() % 100;
		switch (op)
		{
		case 0:
			answer = n1 + n2;
			op = '+';
			break;
		case 1:
			answer = n1 - n2;
			op = '-';
			break;
		case 2:
			answer = n1 * n2;
			op = '*';
			break;
		case 3:
			answer = n1 / n2;
			op = '/';
			break;
		}
		printf("%d %c %d = ", n1, op, n2);
		scanf("%d", &yourAnswer);
		while (getchar() != '\n');
		if (yourAnswer == answer)
			printf("Your answer is right.\n");
		else
		{
			printf("Your answer is wrong.\n");
			printf("%d is the right answer\n", answer);
		}
		printf("Do you want to continue(y/n)? ");
		scanf("%c", &ch);

	} while (ch == 'y');
}