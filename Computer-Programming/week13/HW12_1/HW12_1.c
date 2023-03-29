#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	FILE* fp1, * fp2;
	int num;
	int total = 0;
	int i;
	char ch;
	srand(time(NULL));
	fp1 = fopen("random.txt", "wt");
	if (fp1 == NULL) {
		printf("file open error!\n");
		return 1;
	}
	for (i = 0; i < 10; i++) {
		num = rand() % 99;
		fprintf(fp1, "%d", num);
		if (i != 9)
			fprintf(fp1, "\n");
		total += num;
	}
	fclose(fp1);
	fp2 = fopen("output.txt", "wt");
	if (fp2 == NULL) {
		printf("file open error!\n");
		return 1;
	}
	fp1 = fopen("random.txt", "rt");
	while (!feof(fp1))
	{
		fscanf(fp1, "%d", &num);
		fprintf(fp2, "%d\n", num);
		printf("\t");
		printf("%d", num);
	}
	printf("\n합은 %d", total);
	fprintf(fp2, "합은 %d", total);
	fclose(fp1);
	fclose(fp2);
}