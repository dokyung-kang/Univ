#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char num[14];
	char year[5] = "19";
	int avgN;
	char* lastN;
	printf("�ֹε�� ��ȣ �Է�('-'����):");
	fgets(num, sizeof(num), stdin);
	strncat(year, num, 2);
	printf("����� %s�⵵ ���̱���\n", year);
	lastN = strtok(num, "-");
	lastN = strtok(NULL, "\0");
	if (lastN[0] == '1') {
		avgN = 77;
		printf("�������̽ñ���.\n");
	}
	else {
		avgN = 84;
		printf("�������̽ñ���.\n");
	}
	printf("��� ���� %d�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", avgN, atoi(year) + avgN);
}