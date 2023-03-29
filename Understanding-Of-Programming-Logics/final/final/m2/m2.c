#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[20];
	char key;
	int i;
	int flag = 0;
	scanf("%s %c", str, &key);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == key)
		{
			flag = 1;
			break;
		}
	}
	if (flag)
		printf("%d", i + 1);
	else
		printf("-1");
}