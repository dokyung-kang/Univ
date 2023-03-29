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

int main(void)
{
	int list[] = { 10, 20, 100, 4, 5, 45, 3, 99, 11, 22 };

	printf("가장 큰 수는 %d\n", max1(list, 0, 9));
	printf("가장 큰 수는 %d\n", max1(list, 5, 9));
	printf("가장 큰 수는 %d\n", max1(list, 3, 6));

}