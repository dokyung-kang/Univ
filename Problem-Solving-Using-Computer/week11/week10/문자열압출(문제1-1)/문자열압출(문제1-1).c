#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i, j = 0;
	int len;
	char temp[1000] = "";
	char ch;
	char s[1000];

	scanf("%s", s);

	ch = s[0];
	len = 1;
	for (i = 1; i < strlen(s); i++) {
		if (ch == s[i])
			len++;
		else {
			if (len > 1)
				temp[j++] = len + '0';
			temp[j++] = ch;

			ch = s[i];
			len = 1;
		}
	}
	if (len > 1)
		temp[j++] = len + '0';
	temp[j++] = ch;

	temp[j] = '\0';
	printf("%s\n", temp);
	printf("%d", strlen(temp));
}