#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printFibo(int n);
int main(void)
{
	int num, i;

	printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수):");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		printFibo(i);

	printf("\n");
}
void printFibo(int n)
{
	int n1 = 1, n2 = 1, n3 = 0, j;

		if (n == 0)
			printf("1 ");
		else if (n == 1)
			printf("1 ");
		else
		{		
			for (j = 1; j < n; j++)
			{
				n3 = n1 + n2;
				n1 = n2;
				n2 = n3;
			}
			printf("%d ", n3);
		}
	
}