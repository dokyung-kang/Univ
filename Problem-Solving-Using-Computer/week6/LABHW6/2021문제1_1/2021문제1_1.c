#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void reverse(char src_s[], char s[])
{
	// 코드 작성
	int i;
	int len;

	for (len = 0; src_s[len] != '\0'; len++);
	for (i = 0; i < len; i++) 
		s[len - i - 1] = src_s[i];
	s[len] = '\0';
}
// main은 given
int main(void)
{
	char src_s[101];
	char s[101];
	scanf("%s", src_s);
	reverse(src_s, s);
	printf("%s\n", s);
}