#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, result;
	
	printf("Enter a number: ");
	scanf("%d", &result);
	i = 1;
	while (i <= result)
	{
		printf("%d\n", i*i*i);
		i++;
	}

	return 0;
}


/* ´ä
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num;

	printf("Enter a number: ");
	scanf("%d", &num);
	i = 1;
	while (i <= result)
	{
		printf("%d \n", i * i * i);
		i++;
	}

	return 0;
}
*/