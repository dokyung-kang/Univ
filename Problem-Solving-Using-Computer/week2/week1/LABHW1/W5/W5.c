#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int cnt(char s[], char ch)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		if (ch == s[i])
			count++;
	return count;
}
int main(void)
{
	char s[50];
	char c;

	printf("Enter a String: ");
	scanf("%s", s);
	while (getchar() != '\n');

	printf("Enter a character: ");
	scanf("%c", &c);

	printf("'%c' is appeared %d times", c, cnt(s, c));

}