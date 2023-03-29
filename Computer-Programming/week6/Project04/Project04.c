#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void mergeString(char c[], char a[], char b[])
{
	int indexA = 0, indexB = 0;
	int lenA, lenB, lenC = 0;
	int temp;

	for (lenA = 0; a[lenA] != '\0'; lenA++);
	for (lenB = 0; b[lenB] != '\0'; lenB++);
	for (lenC = 0; lenC < lenA + lenB; lenC++) {
		if (a[indexA] <= b[indexB])
			c[lenC] = a[indexA++];
		else
			c[lenC] = b[indexB++];
	}
}

int main(void)
{
	char word1[10], word2[10];
	char mergedWord[20];

	scanf("%s", word1);
	scanf("%s", word2);
	mergeString(mergedWord, word1, word2);
	printf("%s\n", mergedWord);
}
