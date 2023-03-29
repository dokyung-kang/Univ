#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int year;

	scanf("%d", &year);

	if (year == 1 || year == 3 || year == 5 || year == 7 || year == 8 || year == 10 || year == 12)
		printf("31");
	else if (year == 2)
		printf("28");
	else if (year == 4 || year == 6 || year == 9 || year == 11)
		printf("30");
	else
		printf("invalid month");
}