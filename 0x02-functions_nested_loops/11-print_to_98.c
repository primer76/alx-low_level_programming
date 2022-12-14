#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural number from n to 98
 * followed by new line
 * @n : number to start from n
 */
void print_to_98(int n)
{
	int c, d;

	if (n <= 98)
	{
		for (c = 0; c <= 98; c++)
		{
			if (c != 98)
				printf("%d, ", c);
			else if (c == 98)
				printf("%d\n", c);
		}
		else if (n >= 98)
		{
			for (d = 0; d >= 98; d--)
			{
				if (d != 98)
					printf("%d, ", d);
				else if (d == 98)
					printf("%d\n", d);
			}
		}
	}
}
