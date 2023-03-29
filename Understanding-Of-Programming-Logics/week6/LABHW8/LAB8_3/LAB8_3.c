#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, integers;
	int even = 0;

	printf("Enter the # of integers: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		printf("Enter an integers: ");
		scanf("%d", &integers);

		if (integers % 2 == 0)
			even++;
	}
	printf("The number of even number is %d \n", even);

	return 0;
}