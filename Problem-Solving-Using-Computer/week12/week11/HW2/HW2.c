#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void makeCode(char code[], int distance, char* key)
{
	int i, k;
	char alpha;
	char temp[26];

	for (i = 0; key[i] != '\0'; i++) 
		temp[i] = key[i];
	alpha = 'A';
	while (i < 26) {
		if (!is_int_word(alpha, key)) {
			temp[i] = alpha;
			i++;
		}
		alpha++;
	}
	k = 0;
	for (i = distance; i < 26; i++) 
		code[i] = temp[k++];
	for (i = 0; i < distance; i++)
		code[i] = temp[k++];
}
int is_int_word(char ch, char* word)
{
	int i;
	for (i = 0; word[i] != '\0'; i++)
		if (ch == word[i])
			return 1;
	return 0;
}

void printCode(char code[])
{
	int i;

	for (i = 0; code[i] != '\0' && i < 26; i++)
		printf("%c", code[i]);
}

void remove_duplicated_char(char* word)
{
	int i, j;
	int m = 0;
	char temp[100];
	int have = 0;

	for (i = 0; word[i] != '\0'; i++) {
		have = 0;
		for (j = 0; j < i; j++) {
			if (word[i] == word[j]) {
				have = 1;
				break;
			}
		}
		if (have == 0)
			temp[m++] = word[i];
	}
	temp[m] = '\0';
	for (i = 0; temp[i] != '\0'; i++) 
		word[i] = temp[i];
	word[i] = '\0';
}

void encode(char* c, char* s, char* es)
{
	int i, j;
	char alpha;

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == ' ')
			es[i] = ' ';
		else {
			alpha = 'A';
			for (j = 0; j < 26; j++) {
				if (alpha == s[i]) {
					es[i] = c[j];
					break;
				}
				alpha++;
			}
		}
	}
	es[i] = '\0';
}

int main(void)
{
	char code[26];
	int distance;
	char key[30];
	char sentence[80];
	char encodedSentence[80];
	char decodedSentence[80];

	printf("Enter a word to use for encoding(대문자로된 단어 입력): ");
	scanf("%s", key);
	printf("Enter a distance for encoding: ");
	scanf("%d", &distance);

	printf("--------------------------------------\n");
	printf("alphabet:\t\tABCDEFGHIJKLMNOPQRSTUVWXYZ\n");
	printf("encoded:\t\t");
	remove_duplicated_char(key);
	makeCode(code, distance, key);
	printCode(code);
	printf("\n--------------------------------------\n");

	while (getchar() != '\n');
	printf("Enter a sentence to encode: ");
	gets(sentence);

	printf("original sentence:\t");
	puts(sentence);

	encode(code, sentence, encodedSentence);
	printf("encoded sentence:\t");
	puts(encodedSentence);
}