#include <stdio.h>
int main(void)
{
	int totalMinute, hour, minute;

	printf("Enter hour: ");
	scanf_s("%d", &hour);
	printf("Enter minute: ");
	scanf_s("%d", &minute);

	totalMinute = hour * 60 + minute;

	printf("Total %d minutes", totalMinute);
}