#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void makeCode(char code[], int distance, char* key)
{
	char alpha[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	int i;
	int j = 0;
	int m;
	int have = 0;
	int temp = 0;

	for (i = distance; key[j] != '\0'; i++) {
		if(i < 26)
			code[i] = key[j++];
		else {
			code[temp++] = key[j++];
		}
	}
	for (j = 0; i < 26; j++) {
		have = 0;
		for (m = 0; key[m] != '\0'; m++) {
			if (alpha[j] == key[m]) {
				have = 1;
				break;
			}
		}
		if (have == 0) 
			code[i++] = alpha[j];
	}
	for (i = temp; i < distance; j++) {
		have = 0;
		for (m = 0; key[m] != '\0'; m++) {
			if (alpha[j] == key[m]) {
				have = 1;
				break;
			}
		}
		if (have == 0)
			code[i++] = alpha[j];
	}
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

int main(void)
{
	char code[26];
	int distance;
	char key[30];

	printf("Enter a word to use for encoding(대문자로된 단어 입력): ");
	scanf("%s", key);
	printf("Enter a distance for encoding: ");
	scanf("%d", &distance);

	remove_duplicated_char(key);
	makeCode(code, distance, key);
	printCode(code);
}