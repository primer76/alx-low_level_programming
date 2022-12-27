#include <stdio.h>

/**
 * main - a program that prints all possible different
 * combinations of two digits.
 * Return: Always 0 (success)
 */

int main(void)
{
	int j, k;

	for (j = 48; j <= 56; j++)
	{
		for (k = 49; k <= 57; k++)
		{
			if (k > j)
			{
				putchar(j);
				putchar(k);
				if (j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
