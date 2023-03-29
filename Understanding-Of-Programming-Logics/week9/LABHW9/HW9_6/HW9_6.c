#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int money, n1, n2, n3;

	printf("Enter ±Ý¾×:");
	scanf("%d", &money);

	for (n1 = 500; n1 < money; n1 += 500)
		for (n2 = 700; n2 < money; n2 += 700)
			for (n3 = 400; n3 < money; n3 += 400)
			{
				if (n1 + n2 + n3 == money)
					printf("»§: %d ÄíÅ°: %d ÄÝ¶ó: %d\n", n1 / 500, n2 / 700, n3 / 400);
			}
}