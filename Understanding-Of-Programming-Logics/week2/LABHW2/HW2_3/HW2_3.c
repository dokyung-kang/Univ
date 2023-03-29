#include <stdio.h>
int main(void)
{
	int totalsecond, hour, minute, second;
	totalsecond = 14000;
	hour = totalsecond / 3600;
	minute = totalsecond % 3600 / 60;
	second = totalsecond % 3600 % 60;
	printf("%d seconds:\n", totalsecond);
	printf("%dh %dm %ds", hour, minute, second);
}