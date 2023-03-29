#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max1(int list[], int low, int high)
{
	int i;
	int middle;
	int max = list[low];

	for (i = low; i <= high; i++)
		if (max < list[i])
			max = list[i];
	return max;
}

int max2(int list[], int low, int high)
{
	int middle = (low + high) / 2;
	int maxR;
	int maxL;

	if (low == high)
		return list[low];

	maxL = max2(list, low, middle);
	maxR = max2(list, middle + 1, high);

	if (maxL >= maxR)
		return maxL;
	else
		return maxR;
}

int main(void)
{
	int list[] = { 10, 20, 100, 4, 5, 45, 3, 99, 11, 22 };

	printf("가장 큰 수는 %d\n", max1(list, 0, 9));
	printf("가장 큰 수는 %d\n", max2(list, 0, 9));


	printf("가장 큰 수는 %d\n", max1(list, 5, 9)); 
	printf("가장 큰 수는 %d\n", max2(list, 5, 9));
	
	printf("가장 큰 수는 %d\n", max1(list, 3, 6));
	printf("가장 큰 수는 %d\n", max2(list, 3, 6));
}