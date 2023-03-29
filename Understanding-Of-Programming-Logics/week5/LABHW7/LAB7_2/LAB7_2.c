#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num1, num2, result;
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

	printf("%d %c %d = %d\n", num1, oper, num2, result);

	return 0;
}




/* ´ä

char op;
int operand1, operand2;
int answer;

printf("Enter a operator: ");
scanf("%c", &op);
printf("Enter the first operand: ");
scanf("%d", &operand1);
printf("Enter the second operand: ");
scanf("%d", &operand2);

switch (op)
{
case '+':
	answer = operand1 + operand2;
	break;
case '-':
	answer = operand1 - operand2;
	break;
case '*':
	answer = operand1 * operand2;
	break;
case '/':
	answer = operand1 / operand2;
	break;
}

printf("%d %c %d = %d\n", operand1, op, operand2, answer);

return 0;
*/