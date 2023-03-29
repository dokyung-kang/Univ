#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution1(char* s) // 코드 작성
{
	int i, j;
	int total = 0;
	int sum = 0;
	int cnt = 1;
	for (i = 0; s[i] != '\0';) {
		for (j = 0; j < 2; j++) {
			total = 10 * total + (s[i] - 48);
			i++;
			cnt++;
		}
		sum += total;
		total = 0;
		if (cnt >= 4)
			break;
	}
	return sum;
	
}

int main(void) // 변경하지 말라
{
	char s[50];

	scanf("%s", s);
	printf("%d\n", solution1(s));

	return 0;
}