#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char num[14];
	char year[5] = "19";
	int avgN;
	char* lastN;
	printf("주민등록 변호 입력('-'포함):");
	fgets(num, sizeof(num), stdin);
	strncat(year, num, 2);
	printf("당신은 %s년도 생이군요\n", year);
	lastN = strtok(num, "-");
	lastN = strtok(NULL, "\0");
	if (lastN[0] == '1') {
		avgN = 77;
		printf("남성분이시군요.\n");
	}
	else {
		avgN = 84;
		printf("여성분이시군요.\n");
	}
	printf("평균 수명 %d를 더하면 %d까지 산다고 계산됩니다.\n", avgN, atoi(year) + avgN);
}