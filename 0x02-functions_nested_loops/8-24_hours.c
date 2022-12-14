#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int m, r;

	m = 0;

	while (m < 24)
	{
		r = 0;
		while (r < 60)
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar(':');
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
			_putchar('\n');
			r++;
		}
		m++;
	}
}
