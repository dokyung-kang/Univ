#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void reverse(char s[], char sR[])
{
	// 코드 작성
	int i;
	int len;

	for (len = 0; s[len] != '\0'; len++);
	for (i = 0; i < len; i++)
		sR[len - i - 1] = s[i];
	sR[len] = '\0';
}

int isTwo(char n[])
{
	if ((n[0] - 48) % 2 == 0)
		return 1;
	else
		return 0;
}

int isThree(char n[])
{
	int sum = 0;
	int i;

	for (i = 0; n[i] != '\0'; i++)
		sum += n[i];

	if (sum % 3 == 0)
		return 1;
	else
		return 0;
}

int isFour(char n[])
{
	int num;
	num = (n[1] - 48) * 10 + (n[0] - 48);
	if (num % 4 == 0)
		return 1;
	else
		return 0;
}

int isFive(char n[])
{
	if ((n[0] - 48) % 5 == 0)
		return 1;
	else
		return 0;
}

int main(void)
{
	char n[51];
	char rN[51];

	scanf("%s", n);

	reverse(n, rN);
	printf("%d%d%d%d", isTwo(rN), isThree(rN), isFour(rN), isFive(rN));
}