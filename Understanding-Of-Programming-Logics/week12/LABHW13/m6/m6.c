#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int calDigits(int num);
int calTenToDigits(int num);
int extractNum(int num, int subNum, int dividend);
int main(void)
{
	int num, subNum;
	int dividend;

	scanf("%d", &num);
	scanf("%d", &subNum);

	dividend = calTenToDigits(subNum);

	printf("%d\n", extractNum(num, subNum, dividend));
}
int calDigits(int num)
{
	int count = 0;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return count;
}
int calTenToDigits(int num)
{
	int i;
	int n = 1;
	for (i = 0; i < calDigits(num); i++)
		n *= 10;
	return n;
}
int extractNum(int num, int subNum, int dividend)
{
	while (num != 0)
	{
		if (num % dividend == subNum)
			break;
		num /= 10;
	}
	return num;
}



