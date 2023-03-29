#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* s1, const char* s2) {
	int i, len1, len2;

	for (len1 = 0; s1[len1] != '\0'; len1++);
	for (len2 = 0; s2[len2] != '\0'; len2++);

	if (len1 != len2)
		return 0;
	else {
		for (i = 0; s1[i] != '\0'; i++)
			if (s1[i] != s2[i])
				return 0;
	}
	return 1;
}

int main(void)
{
	char word1[81];
	char word2[81];

	printf("Enter the first word: ");
	scanf("%s", word1);
	printf("Enter the second word: ");
	scanf("%s", word2);

	printf("%d\n", solution(word1, word2));

	return 0;
}