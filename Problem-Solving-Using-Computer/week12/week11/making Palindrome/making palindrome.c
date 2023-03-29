#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int isPalindrome(char w[])
{
	int i;
	int len = strlen(w);
	for (i = 0; i < len / 2; i++)
		if (w[i] != w[len - i - 1])
			return 0;
	return 1;
}

int main(void)
{
	char word[80];
	char rWord[80];
	int i, j, k;
	char* w;

	scanf("%s", word);

	w = word;
	for (i = 0; ; i++) {
		if (isPalindrome(w))
			break;
		w++;
	}
	k = strlen(word);
	for (j = k; i > 0 ; j++) {
		word[j] = word[i - 1];
		i--;
	}
	word[j] = '\0';
	printf("%s\n", word);
}