#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main(void)
{
	char c;
	printf("Enter characters(^z for exit):\n");
	
	while ((c = fgetc(stdin)) != EOF) {
		if (isupper(c))
			fputc(tolower(c), stdout);
		else if (islower(c))
			fputc(toupper(c), stdout);
		else
			fputc(c, stdout);
	}
}