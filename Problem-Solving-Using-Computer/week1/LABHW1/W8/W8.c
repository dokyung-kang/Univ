#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void input(char s[]);
void reverse(char s[]);
int main(void)
{
	char c[50];

	input(c);
	reverse(c);
}

void input(char s[])
{
	printf("Enter your name: ");
	scanf("%s", s);
}

void reverse(char s[])
{
	int i;
	int len;

	for (len = 0; s[len] != '\0'; len++);
	printf("Reverse: ");
	for (i = 0; i < len; i++)
		printf("%c", s[len - i - 1]);

}