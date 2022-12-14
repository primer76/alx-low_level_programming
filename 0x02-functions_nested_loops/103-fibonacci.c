#include <stdio.h>

/**
 * main - finds and prints-out sum of all even-valued terms
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int q;
	unsigned long int a, b, add, val;

	a = 1;
	b = 2;
	val = 0;

	for (q = 1; q <= 33; ++q)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			val = val + a;
		}
		add = a + b;
		a = b;
		b = add;
	}
	printf("%lu\n", val);
	return (0);
}
