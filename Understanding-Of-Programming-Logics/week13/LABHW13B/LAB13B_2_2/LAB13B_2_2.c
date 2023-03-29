#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int j = 0;
	char word[81], newWord[81];

	printf("Enter one word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
			newWord[j++] = word[i];
		newWord[j] = '\0';
	}
	printf("%s\n", newWord);
}