#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char p[] = "apple";
	char str[20];
	char n1[3];
	int flag = 1;
	int i, j;
	
	for (i = 0; i < 3; i++)
	{
		scanf("%s", str);
		for (j = 0; p[j] != '\0'; j++)
			if (str[j] != p[j])
			{
				flag = 0;
				printf("0");
				break;
			}
		if (flag)
			printf("1");
	}
}