#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void reverse(char n[])
{
	// 코드 작성
	int i;
	int len;
	char temp;

	for (len = 0; n[len] != '\0'; len++);
	for (i = 0; i < len / 2; i++) {
		temp = n[i];
		n[i] = n[len - i - 1];
		n[len - 1 - i] = temp;
	}
}

void countCarry(char n1[], char n2[])
{
	int len, len1, len2;
	int i;
	char carry = 0;
	int cnt = 0;

	for (len1 = 0; n1[len1] != '\0'; len1++);
	for (len2 = 0; n2[len2] != '\0'; len2++);
	if (len1 > len2) {
		len = len1;
		for (i = len2; i < len; i++)
			n2[i] = '0';
	}
	else {
		len = len2;
		for (i = len1; i < len; i++)
			n1[i] = '0';
		
	}
	for (i = 0; i < len; i++) {
		if (n1[i] + n2[i] + carry > '9') {
			carry = '1';
			cnt++;
		}
		else
			carry = '0';
	}

	printf("%d", cnt);
}

int main(void)
{
	char n1[101];
	char n2[101];

	scanf("%s", n1);
	scanf("%s", n2);
	reverse(n1);
	reverse(n2);
	countCarry(n1, n2);
}