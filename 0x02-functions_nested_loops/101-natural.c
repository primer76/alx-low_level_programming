#include <stdio.h>

/**
 * main - prints sum of all multiples of 3 and 5
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int w, e, r;
	int j;

	w = 0;
	e = 0;
	r = 0;

	for (j = 0; j < 1024; j++)
	{
		if ((j % 3) == 0)
		{
			w = w + j;
		}
		else if ((j % 5) == 0)
		{
			e = e + j;
		}
	}
	r = w + e;
	printf("%lu\n", r);
	return (0);
}
