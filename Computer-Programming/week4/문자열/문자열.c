#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(char* word) {
	int answer = 0;
	int i;
	for (i = 0; word[i] != '\0'; i++) {
		if (48 <= word[i] && word[i] <= 57) {
			answer = answer * 10 + word[i] - 48;
		}
	}
	return answer;
}
int main(void)
{
	char word[20];
	int answer;
	scanf("%s", word);
	answer = solution(word);
	printf("%d\n", answer);
}