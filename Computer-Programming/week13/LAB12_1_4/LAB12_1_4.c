#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	FILE* fp1;
	FILE *fp2;
	char ch1;
	char ch2;

	fp1 = fopen("hello.txt", "wt");
	fp2 = fopen("world.txt", "wt");
	if (fp1 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	fprintf(fp1, "Hello\n");
	fprintf(fp2, "World\n");
	fclose(fp1);
	fclose(fp2);

	fp1 = fopen("hello.txt", "rt");
	fp2 = fopen("world.txt", "rt");
	if (fp1 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}
	if (fp2 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}

	ch1 = getc(fp1);
	while (!feof(fp1))
	{
		putc(ch1, stdout);
		ch1 = getc(fp1);
	}
	ch2= getc(fp2);
	while (!feof(fp2))
	{
		putc(ch2, stdout);
		ch2 = getc(fp2);
	}
	fclose(fp1);
	fclose(fp2);
}