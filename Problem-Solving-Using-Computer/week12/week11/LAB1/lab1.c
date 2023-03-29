#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char sentence[80];
	char a[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	char encode[26];
	int n;
	int i, j = 0;

	printf("Enter a distance for encoding: ");
	scanf("%d", &n);

	for (i = n; i < 26; i++)
		encode[j++] = a[i];
	for (i = 0; i < n; i++)
		encode[j++] = a[i];
	printf("---------------------------------------------\n");
	printf("alphabet: \t\t");
	for (i = 0; i < 26; i++)
		printf("%c", a[i]);
	printf("\n");
	printf("encode: \t\t");
	for (i = 0; i < 26; i++)
		printf("%c", encode[i]);
	printf("\n");
	printf("---------------------------------------------\n");
	while (getchar() != '\n');
	printf("Enter a sentence to encode: ");
	fgets(sentence, sizeof(sentence), stdin);
	printf("original sentence:\t\t");
	printf("%s", sentence);
	printf("encoded sentence:\t\t");
	for (i = 0; sentence[i] != '\0'; i++) {
		if (sentence[i] == ' ')
			printf(" ");
		else if (isupper(sentence[i])) {
			for (j = 0; j < 26; j++) {
				if (a[j] == sentence[i]) {
					printf("%c", encode[j]);
					break;
				}
			}
		}
		else
			printf("%c", sentence[i]);
	}
}