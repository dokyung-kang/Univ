#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void makeCode(char code[], int distance)
{
	char alpha[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
			'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	int i;
	int j = 0;

	for (i = distance; i < 26; i++)
		code[j++] = alpha[i];
	for (i = 0; i < distance; i++)
		code[j++] = alpha[i];
	code[j] = '\0';
}

void printCode(char code[])
{
	int i;

	for (i = 0; code[i] != '\0'; i++)
		printf("%c", code[i]);
}

void encode(char code[], char sentence[], char encodedSentence[])
{
	int i, j;
	char a[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

	for (i = 0; sentence[i] != '\0'; i++) 
		for (j = 0; j < 26; j++) 
			if (a[j] == sentence[i])
				encodedSentence[i] = code[j];
	encodedSentence[i] = '\0';
}

void decode(char code[], char encodedSentence[], char decodedSentence[])
{
	int i, j;
	char a[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

	for (i = 0; encodedSentence[i] != '\0'; i++)
		for (j = 0; j < 26; j++)
			if (code[j] == encodedSentence[i])
				decodedSentence[i] = a[j];
	decodedSentence[i] = '\0';
}

int main(void)
{
	char code[26]; // code[0]부터 'A'의 암호화문자를 넣음
	int distance;
	char sentence[80];
	char encodedSentence[80];
	char decodedSentence[80];
	printf("Enter a distance for encoding:");
	scanf("%d", &distance);
	makeCode(code, distance);
	printCode(code);
	//fflush(stdin);
	while (getchar() != '\n');
	printf("Enter a sentence to encode:");
	fgets(sentence, sizeof(sentence), stdin);
	encode(code, sentence, encodedSentence);
	printf("original sentence:\t");
	puts(sentence);
	printf("encoded sentence:\t");
	puts(encodedSentence);
	decode(code, encodedSentence, decodedSentence);
	printf("decoded sentence:\t");
	puts(decodedSentence);
}