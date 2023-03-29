#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char c1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	char c2[] = { 1, 2, 3, 4, 9, 10, 11, 12 };
	char c3[] = { 1, 2, 5, 6, 9, 10, 13, 14 };
	char c4[] = { 1, 3, 5, 7, 9, 11, 13, 15 };

	char g1, a1;
	char g2, a2;
	char g3, a3;
	char g4, a4;

	int i;
	int z1, z2, z3, z4;
	int cnt = 0;

	scanf("%c %c %c %c", &g1, &g2, &g3, &g4);

	for (i = 1; i <= 15; i++) {
		for (z1 = 0; z1 < 8; z1++) {
			if (c1[z1] == i) {
				a1 = 'Y';
				break;
			}
			else
				a1 = 'N';
		}
		for (z2 = 0; z2 < 8; z2++) {
			if (c2[z2] == i) {
				a2 = 'Y';
				break;
			}
			else
				a2 = 'N';
		}
		for (z3 = 0; z3 < 8; z3++) {
			if (c3[z3] == i) {
				a3 = 'Y';
				break;
			}
			else
				a3 = 'N';
		}
		for (z4 = 0; z4 < 8; z4++) {
			if (c4[z4] == i) {
				a4 = 'Y';
				break;
			}
			else
				a4 = 'N';
		}
		if (g1 == a1)
			cnt++;
		if (g2 == a2)
			cnt++;
		if (g3 == a3)
			cnt++;
		if (g4 == a4)
			cnt++;
		if (cnt == 4)
			break;
		else
			cnt = 0;
	}
	if (cnt == 4)
		printf("%d", i);
	else
		printf("¾øÀ½");
}