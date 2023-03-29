#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution(char* s, int n) // 코드 작성
{
	int i, j;
	int total = 0;
	int sum = 0;
	int cnt = 1;
	int len;
	for (len = 0; s[len] != '\0'; len++);
	for (i = 0; s[i] != '\0';) {
		for (j = 0; j < n; j++) {
			if (s[i] == '\0')
				break;
			total = 10 * total + (s[i] - 48);
			i++;
			cnt++;
		}
		sum += total;
		total = 0;
	}
	return sum;
}

int main(void) // 변경하지 말라
{
	char s[50];
	int num;

	scanf("%s", s);
	scanf("%d", &num);
	printf("%d\n", solution(s, num));

	return 0;
}