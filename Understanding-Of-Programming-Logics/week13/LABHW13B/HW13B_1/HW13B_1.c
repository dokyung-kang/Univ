#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int j = 0;
	char word[81], newWord[81];

	printf("Enter one word: ");
	scanf("%s", word);

	printf("Word givien: %s\n", word);

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
			newWord[j++] = word[i] + 32;
		else if (word[i] >= 'a' && word[i] <= 'z')
			newWord[j++] = word[i] - 32;
		else
			newWord[j++] = word[i];
		newWord[j] = '\0';
	}
	printf("new word: %s", newWord);

	return 0;
}