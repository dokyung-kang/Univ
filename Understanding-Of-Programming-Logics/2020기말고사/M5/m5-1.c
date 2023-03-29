#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;
	int j = 0;
	int element;
	int num[20];
	int newN[21];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &num[i]);
	scanf("%d", &element);
	newN[0] = element;
	for (i = 1; i <= n; i++)
		newN[i] = num[j++];
	for (i = 0; i <= n; i++)
		printf("%d ", newN[i]);

}