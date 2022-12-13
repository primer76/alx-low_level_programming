#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int j;
	char w;

	j = 0;
	while (j < 10)
	{
		w = 'a';
		while (w <= 'z')
		{
			_putchar(w);
			w++;
		}
		_putchar('\n');
		j++;
	}
}
