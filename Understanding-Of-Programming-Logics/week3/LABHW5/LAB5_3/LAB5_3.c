#include <stdio.h>
int main(void)
{
	int radius;
	double area;
	const double pi = 3.141592;

	printf("Enter a radius: ");
	scanf_s("%d", &radius);

	area = radius * radius * pi;

	printf("The area of a circle with %d:\t%f.", radius, area);

	return 0;
}