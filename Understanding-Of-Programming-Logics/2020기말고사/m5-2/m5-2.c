#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;
	int j = 0;
	int element, pos;
	int num[20];
	int newN[21];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &num[i]);
	scanf("%d", &pos);
	scanf("%d", &element);
	for (i = 0; i <= n; i++)
	{
		if (i == pos)
		{
			newN[i] = element;
			i++;
		}
		newN[i] = num[j++];
	}
	for (i = 0; i <= n; i++)
		printf("%d ", newN[i]);

}