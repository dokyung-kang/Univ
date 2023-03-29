#include <stdio.h>
int main(void)
{
	int hour, minute, second, totalSecond;

	printf("Enter h m s: ");
	scanf_s("%d %d %d", &hour, &minute, &second);

	totalSecond = hour * 3600 + minute * 60 + second;

	printf("---Calculation Result--- \n");
	printf("Total %d seconds", totalSecond);

	return 0;
}