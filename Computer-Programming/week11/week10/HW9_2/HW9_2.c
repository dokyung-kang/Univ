#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char id[50];
	char birthYear[50];
	int year;

	printf("�ֹε�� ��ȣ �Է�('-'����):");
	gets(id);

	strcpy(birthYear, "19");
	strcat(birthYear, id, 2);
	year = atoi(birthYear);

	printf("����� %s�⵵ ���̱���\n", year);
	if (id[7] == '1') {
		printf("�������̽ñ���.\n");
		printf("��� ���� 79�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", atoi(year) + 79);
	}
	else {
		printf("�������̽ñ���.\n");
		printf("��� ���� 84�� ���ϸ� %d���� ��ٰ� ���˴ϴ�.\n", atoi(year) + 84);
	}
}