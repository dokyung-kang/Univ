#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printUpperCase(char s[]);
int strLength(char s1[]);
int main(void)
{
	char str[81];

	printf("Enter a string:");
	scanf("%s", str);

	printf("���̴� %d\n", strLength(str));

	printf("�빮�ڸ� ����ϸ�\n");
	printUpperCase(str);
}
int strLength(char s1[])
{
	int i;
	for (i = 0; s1[i] != '\0'; i++);
	return i;
}
void printUpperCase(char s[])
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'A' && s[i] <= 'Z')
			printf("%c", s[i]);
	printf("\n");
}