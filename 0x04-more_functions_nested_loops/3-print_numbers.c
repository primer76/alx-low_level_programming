#include "main.h"

/**
 * print_numbers - prits numbers 0 - 9
 */

void print_numbers(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		_putchar(k + '0');
	}
	_putchar('\n');
}
