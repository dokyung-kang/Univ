#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char s[1000];
	char s2[1000];
	int i, j = 0;
	int count = 1;
	int len = 0;

	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == s[i + 1])
			count++;
		else {
			if (count != 1) {
				s2[j++] = count + 48;
				count = 1;
				len++;
			}
			s2[j++] = s[i];
			len++;
		}
	}
	for (i = 0; i < len; i++)
		printf("%c", s2[i]);
	printf("\n");
	printf("%d", len);
}