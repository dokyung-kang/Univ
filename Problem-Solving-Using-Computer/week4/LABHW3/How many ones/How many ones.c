#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
// n이 모두 1로 되어있으면 그 개수를 반환, 아니면 0을 반환
int isAllOnes(int n)
{
	int count = 0, last;
	while (n != 0) {
		last = n % 10;
		if (last != 1) return 0;
		n /= 10;
		count++;
	}
	return count;
}
int main(void)
{
	int a, b, c;
	int number;

	//printf("Enter 수:");
	scanf("%d", &a);

	c = a;
	b = 1;
	while (!(number = isAllOnes(c))) {
		c = a * b;
		printf("b와 c는 %d, %d\n", b, c);
		b++;
	}

	printf("%d\n", number);
}
*/

///*더 나은 효율적인 버전: better --> 이걸로 재제출한다
#include <stdio.h>
int main(void)
{
	int num, one = 1, count = 0;
	int remainder = -1;

	scanf("%d", &num);

	// 아래의 코드에 필요한 부분에 코드를 삽입

	while (remainder != 0)
	{
		//반복이 진행되면서 one을 11, 111, 1111로 변화하면서
		//num으로 나누어서 remainder 계산하고 count도 계산
		if (one % num == 0)
			remainder = 0;
		one = one * 10 + 1;
		count++;
	}
	// printf("%d %d\n", one, one / num); 테스트로 출력
	printf("%d\n", count);
}
//*/