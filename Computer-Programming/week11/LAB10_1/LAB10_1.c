struct customer {
	char name[20];
	int age;
};
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i;
	struct customer aCustomer;
	strcpy(aCustomer.name, "�ڼ���");
	aCustomer.age = 36;
	printf("Name = %s, Age = %d\n", aCustomer.name, aCustomer.age);
	struct customer cArray[2] = { {"�嵿��", 38}, {"��ҿ�", 38} };
	for (i = 0; i < 2; i++)
		printf("Name = %s, Age = %d\n", cArray[i].name, cArray[i].age);
}