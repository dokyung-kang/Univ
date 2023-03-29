#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char s[1000];
	char temp[1000];
	char a[27];
	char e[27];
	int i;
	int j;
	char start = 'A';

	scanf("%s", s);

	for (i = 0; i < 26; i++)
		a[i] = start++;
	a[i] = '\0';
	j = 25;
	for (i = 0; i < 26; i++) 
		e[i] = a[j--];
	e[i] = '\0';

	for (i = 0; s[i] != '\0'; i++) {
		for (j = 0; j < 26; j++) {
			if (s[i] == a[j])
				printf("%c", e[j]);
		}
	}

}