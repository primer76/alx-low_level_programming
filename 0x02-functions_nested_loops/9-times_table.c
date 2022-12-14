#include "main.h"

/**
 * times_table - prints 9 timestable from 0
 */
void times_table(void)
{
	int w, x, y;

	for (w = 0; w < 10; w++)
	{
		for (x = 0; x < 10; x++)
		{
			y = x * 1;
			if (x == 0)
			{
				_putchar(y + '0');
			}
			if (y < 10 && x != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(y + '0');
			}
			else if (y >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
