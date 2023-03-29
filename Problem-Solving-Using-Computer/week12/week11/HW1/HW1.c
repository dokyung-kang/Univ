#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void makeCode(char code[], int dist)
{
	char alpha[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	int i;
	int j = 0;

	for (i = dist; i < 26; i++)
		code[j++] = alpha[i];
	for (i = 0; i < dist; i++)
		code[j++] = alpha[i];
}

void printCode(char code[])
{
	int i;

	for (i = 0; code[i] != '\0' && i < 26; i++)
		printf("%c", code[i]);
}

void encode(char code[], char s[], char e[])
{
	int i, j;
	char a[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == ' ')
			e[i] = ' ';
		else if (s[i] == '\n')
			e[i] = '\0';
		else {
			for (j = 0; j < 26; j++)
				if (a[j] == s[i]) {
					e[i] = code[j];
					break;
				}
		}
	}
}

void decode(char code[], char e[], char d[])
{
	int i, j;
	char a[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

	for (i = 0; e[i] != '\0'; i++) {
		if (e[i] == ' ')
			d[i] = ' ';
		else {
			for (j = 0; j < 26; j++)
				if (code[j] == e[i]) {
					d[i] = a[j];
					break;
				}
		}
	}
	d[i] = '\0';
}

int main(void)
{
	char code[26];
	int distance;
	char sentence[80];
	char encodedSentence[80];
	char decodedSentence[80];
	int i, j;

	printf("Enter a distance for encoding:");
	scanf("%d", &distance);
	
	printf("------------------------------------------\n");
	for (i = 0; i < 26; i++)
		printf("%c", i + 65);
	printf("\n");
	makeCode(code, distance);
	printCode(code);
	printf("\n");
	printf("------------------------------------------\n");

	while (getchar() != '\n');

	printf("Enter a sentence to encode:");
	fgets(sentence, sizeof(sentence), stdin);

	printf("original sentence:\t");
	puts(sentence);

	encode(code, sentence, encodedSentence);
	printf("encoded sentence:\t");
	puts(encodedSentence);

	decode(code, encodedSentence, decodedSentence);
	printf("decoded sentence:\t");
	puts(decodedSentence);
}