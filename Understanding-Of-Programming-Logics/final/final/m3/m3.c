#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int s[20];
	int s1[20];
	int s2[20];
	int i, num, n;
	int lessN = 0, moreN = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &s[i]);
	scanf("%d", &num);
	for (i = 0; i < n; i++)
	{
		if (s[i] < num)
			s1[lessN++] = s[i];
		else
			s2[moreN++] = s[i];
	}
	for (i = 0; i < lessN; i++)
		printf("%d ", s1[i]);
	printf("\n");
	for (i = 0; i < moreN; i++)
		printf("%d ", s2[i]);

}