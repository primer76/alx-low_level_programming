#include <stdio.h>

/**
 * main - prints all possible success of two
 * two-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int h, v;

	for (h = 0; h < 100; h++)
	{
		for (v = 0; v < 100; v++)
		{
			if (h < v)
			{
				putchar((h / 10) + 48);
				putchar((h % 10) + 48);
				putchar(' ');
				putchar((v / 10) + 48);
				putchar((v % 10) + 48);
				if (h != 98 || v != 99)
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
