#include <stdio.h>
int main(void)
{
	int totalMinute, hour, minute;
	totalMinute = 130;
	hour = totalMinute / 60;
	minute = totalMinute % 60;
	printf("%dºÐ:\n", totalMinute);
	printf("%dh %dm", hour, minute);
}