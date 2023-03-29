#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int isHalfSame(char* p1, char* p2) // 코드 작성
{
	int cnt = 0;
	int len = 0;
	while (*p1) {
		if (*p1 != *p2)
			cnt++;
		p1++;
		p2++;
		len++;
	}
	if (cnt <= (len / 2))
		return 1;
	else
		return 0;
}
int main(void) // 변경하지 말라
{
	char str1[20], str2[20];
	int i;

	for (i = 0; i < 3; i++) {
		scanf("%s", str1);
		scanf("%s", str2);
		printf("%d\n", isHalfSame(str1, str2));
	}
}