#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int calculatePoint(char s[]);
int main(void)
{
	char str[20];
	printf("단어를 입력하세요(빈칸없이):");
	scanf("%s", str);
	printf("점수는 %d\n", calculatePoint(str));
}
int calculatePoint(char s[])
{
	int i;
	int total = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if ('A' <= s[i] && s[i] <= 'Z')
			total += s[i] - 64;
		if ('a' <= s[i] && s[i] <= 'z')
			total += s[i] - 96;
	}
	return total;
}