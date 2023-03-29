#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, count;
	int n;
	int num[20];
	int no[20];
	int nx[20];
	int prime = 0, nPrime = 0;

	scanf("%d", &count);
	for (i = 0; i < count; i++)
		scanf("%d", &num[i]);
	for (i = 0; i < count; i++)
	{
		for (j = 2; j < num[i]; j++)
			if (num[i] % j == 0)
			{
				nx[nPrime] = num[i];
				nPrime++;
				break;
			}
		if (num[i] == j)
		{
			no[prime] = num[i];
			prime++;
		}
	}
	for (i = 0; i < prime; i++)
		printf("%d ", no[i]);
	for (i = 0; i < nPrime; i++)
		printf("%d ", nx[i]);
		
}