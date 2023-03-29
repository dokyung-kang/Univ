#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void makeP(char s1[], char s2[], int len, int n)
{
	int i;
	int j;

	for (i = 0; s1[i] != '\0'; i++) 
		s2[i] = s1[i];
	for (j = n - 1; j >= 0; j--)
		s2[i++] = s1[j];
	s2[i] = '\0';
}

int isP(char s2[])
{
	int len;
	int i;

	for (len = 0; s2[len] != '\0'; len++);
	for (i = 0; i < len / 2; i++) {
		if (s2[i] != s2[len - 1 - i])
			return 0;
	}
	return 1;
}
int main(void)
{
	char p[100];
	char mp[100];
	int len;
	int i;

	scanf("%s", p);


	for (len = 0; p[len] != '\0'; len++);

	for (i = 0; i < len; i++) {
		makeP(p, mp, len, i);
		if (isP(mp))
			break;
	}
	printf("%s", mp);

}