#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num1, num2, result, answer;
	char oper;

	printf("Enter a operator: ");
	scanf("%c", &oper);
	printf("Enter the first operand: ");
	scanf("%d", &num1);
	printf("Enter the second operand: ");
	scanf("%d", &num2);

	switch (oper)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	}

	printf("%d %c %d = ", num1, oper, num2);
	scanf("%d", &answer);

	if (answer == result)
		printf("Right answer\n");
	else
	{
	printf("Wrong!\n");
	printf("%d is the right answer\n", result);
	}
	
	return 0;
}