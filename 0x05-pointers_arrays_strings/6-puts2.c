#include "main.h"

/**
 * puts2 - every character of the string is printed
 * @str : code to be checked
 */

void puts2(char *str)
{
	int q;

	for (q = 0; str[q] != '\0'; ++q)
	{
		if (q % 2 == 0)
			_putchar(str[q]);
	}
	_putchar('\n');
}
