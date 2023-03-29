#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int i;
	int r = 1;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) 
		r *= 2;
	
	printf("%d", r);
}