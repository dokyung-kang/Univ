#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char s[30];
	int i, n;

	scanf("%s", s);
	for (n = 0; s[n] != '\0'; n++);
	for (i = 0; i < n / 2; i++)
	{
		if (s[i] != s[n - i - 1])
			s[n - i - 1] = s[i];
	}
	printf("%s", s);
}