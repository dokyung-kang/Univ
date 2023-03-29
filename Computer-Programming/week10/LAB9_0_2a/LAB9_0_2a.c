#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char c;
	printf("Enter characters(^z for exit):\n");
	c = getchar();
	while (c != EOF) {
		if (isupper(c))
			printf("%c", tolower(c));
		else if (islower(c))
			printf("%c", toupper(c));
		else
			putchar(c);
		c = getchar(); 
	}
}