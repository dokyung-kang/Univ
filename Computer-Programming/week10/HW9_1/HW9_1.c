#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char string[50];
	char alphaString1[50];
	char alphaString2[50];
	char digitString[50];
	char convertedString[50];

	printf("문자열을 입력하세요: ");

	int m = 0;
	int n = 0;
	fgets(string, sizeof(string), stdin);
	for (int i = 0; string[i] != '\0'; i++) {
		if (isalpha(string[i]))
			alphaString1[m++] = string[i];
		if(isdigit(string[i]))
			digitString[n++] = string[i];
	}
	alphaString1[m] = '\0';
	digitString[n] = '\0';

	printf("문자들은 %s\n", alphaString1);
	printf("숫자들은 %s\n", digitString);

	int k = 0;
	for (int i = 0; alphaString1[i] != '\0'; i++) {
		if(isupper(alphaString1[i]))
			alphaString2[k++] = tolower(alphaString1[i]);
		if (islower(alphaString1[i]))
			alphaString2[k++] = toupper(alphaString1[i]);
	}
	alphaString2[k] = '\0';
	strcpy(convertedString, alphaString1);
	strcat(convertedString, digitString);
	printf("대소문자를 바꾼 문자들은 %s\n", alphaString2);
	printf("문자들과 숫자들로 재배열한 문자열은 %s\n", convertedString);
}