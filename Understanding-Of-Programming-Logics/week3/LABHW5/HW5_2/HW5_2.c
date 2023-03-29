#include <stdio.h>
int main(void)
{
	int radius;
	double area, circumference;
	const double pi = 3.141592;

	printf("Enter a radius: ");
	scanf_s("%d", &radius);

	area = radius * radius * pi;
	circumference = radius * 2 * pi;

	printf("The area of a circle with %d:\t\t%f\n", radius, area);
	printf("The circumference of a circle with %d:  %f\n", radius, circumference);

	return 0;
}