#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, count, n, key;
	int kCount = 0;
	int num[20];

	scanf("%d", &count);

	for (i = 0; i < count; i++)
	{
		scanf("%d", &n);
		num[i] = n;
	}
	scanf("%d", &key);
	for (i = 0; i < count; i++)
		if (key == num[i])
			kCount++;
	printf("%d", kCount);
}