#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char s[50];
	char c;
	int i;
	int cnt = 0;

	printf("Enter a String: ");
	scanf("%s", s);
	while (getchar() != '\n');

	printf("Enter a character: ");
	scanf("%c", &c);

	for (i = 0; s[i] != '\0'; i++)
		if (c == s[i])
			cnt++;

	printf("'%c' is appeared %d times", c, cnt);

}