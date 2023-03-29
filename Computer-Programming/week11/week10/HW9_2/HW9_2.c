#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char id[50];
	char birthYear[50];
	int year;

	printf("주민등록 변호 입력('-'포함):");
	gets(id);

	strcpy(birthYear, "19");
	strcat(birthYear, id, 2);
	year = atoi(birthYear);

	printf("당신은 %s년도 생이군요\n", year);
	if (id[7] == '1') {
		printf("남성분이시군요.\n");
		printf("평균 수명 79를 더하면 %d까지 산다고 계산됩니다.\n", atoi(year) + 79);
	}
	else {
		printf("여성분이시군요.\n");
		printf("평균 수명 84를 더하면 %d까지 산다고 계산됩니다.\n", atoi(year) + 84);
	}
}