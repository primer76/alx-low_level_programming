#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers, starting from 1 and 2
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int b, c, d, forward;

	c = 1;
	d = 2;

	for (b = 1; b <= 50; ++b)
	{
		if (c != 20365011074)
		{
			printf("%ld, ", c);
		}
		else
		{
			printf("%ld\n", c);
		}
		forward = c + d;
		c = d;
		d = forward;
	}
	return (0);
}
