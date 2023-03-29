#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;
	int count = 0;
	int binary[256];

	printf("Enter ¾ç¼ö<<256>:");
	scanf("%d", &n);

	for (i = 0; n != 0; i++)
	{
		binary[i] = n % 2;
		count++;
		n /= 2;
	}
	for (i = 0; i < count; i++)
		printf("%d", binary[count - i -1]);
}