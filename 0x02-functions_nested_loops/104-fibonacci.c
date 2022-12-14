#include <stdio.h>

/**
 * main - finds and prints first 98 fibonacci numbers, starts from 1 and 2
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int f, g, h, g1, g2, h1, h2;

	g = 1;
	h = 2;

	printf("%lu", g);

	for (f = 1; f < 91; f++)
	{
		printf(", %lu", h);
		h = h + g;
		g = h - g;
	}

	g1 = g / 1000000000;
	g2 = g % 1000000000;
	h1 = h / 1000000000;
	h2 = h % 1000000000;

	for (f = 92; f < 99; ++f)
	{
		printf(", %lu", h1 + (h2 / 1000000000));
		printf("%lu", h2 % 1000000000);
		h1 = h1 + g1;
		g1 = h1 - g1;
		h2 = h2 + g2;
		g2 = h2 - g2;
	}
	printf("\n");
	return (0);
}
