#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n[5];
	int key;
	int i;

	printf("Enter 5개의 정수: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &n[i]);

	printf("Enter a key: ");
	scanf("%d", &key);

	for(i = 0; i < 5; i++)
		if (n[i] == key) {
			printf("%d번째에 있다", i + 1);
			break;
		}
	if (i == 5)
		printf("없다");
}