#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, k;
	int prime = 0;
	char word1[100], word2[100];
	char str[100];

	printf("Enter the first word: ");
	scanf("%s", word1);
	printf("Enter the second word: ");
	scanf("%s", word2);

	for (j = 0; word1[j] != '\0'; j++);
	for (k = 0; word2[k] != '\0'; k++);
	if (j >= k)
		for (i = 0; word1[i] != '\0'; i++)
			str[i] = word1[i];
	else
		for (i = 0; word2[i] != '\0'; i++)
			str[i] = word2[i];
	str[i] = '\0';

	for (i = 0; str[i] != '\0'; i++)
		if (word1[i] != word2[i])
		{
			prime = 1;
			break;
		}

	if (prime == 0)
		printf("두 단어는 같다");
	else
		printf("두 단어는 다르다");

	return 0;
}