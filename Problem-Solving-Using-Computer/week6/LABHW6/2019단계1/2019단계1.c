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

int main(void)
{
	char n[51];
	char rN[51];

	scanf("%s", n);

	reverse(n, rN);
	printf("%d", isTwo(rN));
}