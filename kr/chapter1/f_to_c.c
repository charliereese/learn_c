#include <stdio.h>

// The below main function prints
// a fahrenheit to celsius table

main() 
{
	int fahr, celsius;
	int i, max, step;

	i = 0;
	max = 300;
	step = 20;

	fahr = i;

	while (fahr <= max) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}