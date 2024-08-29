#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int n;
	int tempN;	
	int max = 0;
	int min = 1000000;
	int result;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &tempN);
		if (tempN >= max)
			max = tempN;
		if (tempN <= min)
			min = tempN;
	}

	result = max * min;
	printf("%d", result);
}