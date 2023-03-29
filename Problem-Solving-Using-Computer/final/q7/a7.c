#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution(char* s)
{
	int i, j = 0;
	int len;
	int max = 0;
	char ch;

	ch = s[0];
	len = 1;
	for (i = 1; i < strlen(s); i++) {
		if (ch == s[i])
			len++;
		else {
			if (max < len)
				max = len;
			ch = s[i];
			len = 1;
		}
	}
	if (len > 1)
		if (max < len)
			max = len;
	return max;
}

int main(void)
{
	char s[1001];
	scanf("%s", s);
	printf("%d\n", solution(s));
}