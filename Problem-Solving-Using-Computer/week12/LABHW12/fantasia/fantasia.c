#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void tree(int leftN, int leftD, int rightN, int rightD, int n, int d)
{
	if ((leftN + rightN == n) && (leftD + rightD == d))
		return;
	else if ((leftN + rightN) * d > n * (leftD + rightD)) {
		printf("L");
		tree(leftN, leftD, (leftN + rightN), (leftD + rightD), n, d);
	}
	else {
		printf("R");
		tree((leftN + rightN), (leftD + rightD), rightN, rightD, n, d);
	}
}
int main(void)
{
	//n(N) == 분자, d(D) == 분모
	int n, d;

	scanf("%d %d", &n, &d);
	if (n == 0 && d == 0)
		printf("L");
	else if (n == 1 && d == 1)
		printf("R");
	else
		tree(0, 1, 1, 0, n, d);

}