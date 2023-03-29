#define _CRT_SECURE_NO_WARNINGS
#define MAX_STRING 81	
#include <stdio.h>
int main(void)
{
	char str[MAX_STRING];
	int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
	int i;

	printf("문자열 입력 (문자수 %d 이하): ", MAX_STRING);
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			countA++;
		if (str[i] == 'e' || str[i] == 'E')
			countE++;
		if (str[i] == 'i' || str[i] == 'I')
			countI++;
		if (str[i] == 'o' || str[i] == 'O')
			countO++;
		if (str[i] == 'u' || str[i] == 'U')
			countU++;
	}
	printf("a or A: ");
	printf("%d 개\n", countA);
	printf("e or E: ");
	printf("%d 개\n", countE);
	printf("i or I: ");
	printf("%d 개\n", countI);
	printf("o or O: ");
	printf("%d 개\n", countO);
	printf("u or U: ");
	printf("%d 개\n", countU);

	return 0;
}