#include <stdio.h>
#define CONVERSION_FACTOR 9.0 / 5.0

int main(void)
{
	double celsius, fahrenheit;
	const int BASE = 32;

	printf("Enter a celcius temperature: ");
	scanf_s("%lf", &celsius);

	fahrenheit = celsius * CONVERSION_FACTOR + BASE;
	
	printf("Fahrenheit Equivalent : %f", fahrenheit);
}