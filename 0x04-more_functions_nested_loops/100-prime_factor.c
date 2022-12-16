#include <stdio.h>
#include <math.h>

/**
 * main - prints largest prime factor of a number
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int a;
	long int max;
	long int j;

	a = 612852475143;
	max = -1;

	while (a % 2 == 0)
	{
		max = 2;
		a /= 2;
	}

	for (j = 3; j <= sqrt(a); j = j + 2)
	{
		while (a % j == 0)
		{
			max = j;
			a = a / j;
		}
	}

	if (a > 2)
		max = a;

	printf("%ld\n", max);

	return (0);
}
