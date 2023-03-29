#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);

	printf("\n%d", get_cycle_number(n));
}

int get_cycle_number(int n)
{
	int len = 1;
	
	printf("%d ", n);
	while (n != 1) {
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
		printf("%d ", n);
		len++;
	}
	return len;

}