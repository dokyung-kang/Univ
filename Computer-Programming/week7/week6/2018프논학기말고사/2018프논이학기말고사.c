#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void mergeString(char c[], char a[], char b[])
{
	int i, j;
	int lenA, lenB, lenC = 0;
	int temp;

	for (lenA = 0; a[lenA] != '\0'; lenA++);
	for (lenB = 0; b[lenB] != '\0'; lenB++);
	for (i = 0; i < lenA; i++)
		c[lenC++] = a[i];
	for (i = 0; i < lenB; i++)
		c[lenC++] = b[i];
	c[lenC] = '\0';
	for (i = 0; i < lenC - 1; i++) {
		for (j = 0; j < lenC - i - 1; j++) {
			if (c[j] > c[j + 1]) {
				temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;
			}
		}
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
