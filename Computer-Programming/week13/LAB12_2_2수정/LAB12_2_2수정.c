#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	FILE* fp;
	FILE* fp2;
	char buf[30];

	fp = fopen("hello.txt", "rt");
	if (fp == NULL)
	{
		printf("file open error!\n");
		return 1;
	}
	fp2 = fopen("hello2.txt", "wt");
	if (fp2 == NULL)
	{
		printf("file open error!\n");
		return 1;
	}
	fgets(buf, sizeof(buf), fp);
	while (!feof(fp)) {
		fputs(buf, fp2);
		fgets(buf, sizeof(buf), fp);
	}
	fseek(fp, 0, SEEK_SET);
	fgets(buf, sizeof(buf), fp);
	while (!feof(fp)) {
		fputs(buf, fp2);
		fgets(buf, sizeof(buf), fp);
	}
	fclose(fp);
	fclose(fp2);
}