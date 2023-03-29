#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct customer {
	char name[20];
	int age;
};
int main(void)
{
	struct customer aCustomer = { "박수희", 36 };
	struct customer cArray[2] = { {"장동견", 38}, {"고소영", 38} };
	struct customer* cp = &aCustomer;
	int i;

	printf("Name = %s, Age = %d\n", cp->name, cp->age);

	cp = cArray;

	for (i = 0; i < 2; i++) {
		printf("Name = %s, Age = %d\n", cp->name, cp->age);
	}
}