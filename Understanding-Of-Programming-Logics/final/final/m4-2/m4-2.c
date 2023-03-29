#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void changeToDigitEncode(char s[], char e[])
{
	int i, j = 0;
	int n1, n2;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 'I')
			e[j++] = s[i] - 16;
		else
		{
			n1 = (s[i] - 64) / 10;
			n2 = (s[i] - 64) % 10;
			e[j++] = n1 + 48;
			e[j++] = n2 + 48;
		}
	}
	e[j] = '\0';
}
int main(void)
{
	char sentence[20], encoded[40];
	scanf("%s", sentence);
	changeToDigitEncode(sentence, encoded);
	printf("%s\n", encoded);
}