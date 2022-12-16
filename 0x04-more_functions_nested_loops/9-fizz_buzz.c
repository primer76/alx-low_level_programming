#include <stdio.h>

/**
 * main - prints 1 to 100 but with exception of multiples of 3
 * multiples of 5 oe multiples of both
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if (m % 3 == 0 && m % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (m % 3 != 0 && m % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (m % 3 == 0 && m % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (m == 1)
		{
			printf("%d", m);
		}
		else
		{
			printf(" %d", m);
		}
	}
	printf("\n");

	return (0);
}
