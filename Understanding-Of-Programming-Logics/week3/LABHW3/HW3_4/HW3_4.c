#include <stdio.h>
int main(void)
{
	int base, height, area, width, circumference;

	printf("밑변과 높이를 입력하세요: ");
	scanf_s("%d %d", &base, &height);

	area = (base * height) / 2;

	printf("밑변과 높이가 각각 %d와 %d인 삼각형의 넓이는 %d이다 \n", base, height, area);

	printf("직사각형의 가로와 높이를 입력하세요: ");
	scanf_s("%d %d", &width, &height);

	circumference = (width + height) * 2;
	area = width * height;

	printf("가로와 높이가 각각 %d와 %d인 직사각형의 둘레와 넓이는 %d와 %d이다", width, height, circumference, area);

	return 0;
}