#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	FILE* fp1, * fp2;
	char ch;

	fp1 = fopen("input.txt", "rt");
	if (fp1 == NULL) {
		printf("file open error!\n");
		return 1;
	}
	fp2 = fopen("output.txt", "wt");
	if (fp2 == NULL) {
		printf("file open error!\n");
		return 1;
	}
	ch = getc(fp1);
	while (!feof(fp1))
	{
		if (islower(ch))
			putc(toupper(ch), fp2);
		else
			putc(ch, fp2);
		ch = getc(fp1);
	}
	fseek(fp1, 0, SEEK_SET);
	ch = getc(fp1);
	while (!feof(fp1))
	{
		if (isupper(ch))
			putc(tolower(ch), fp2);
		else
			putc(ch, fp2);
		ch = getc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
}