#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int state;
	FILE* fp;
	char ch;

	fp = fopen("hello.in", "rt");
	if (fp == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	ch = getc(fp);
	while (!feof(fp))
	{
		putc(ch, stdout);
		ch = getc(fp);
	}
	fclose(fp);
}