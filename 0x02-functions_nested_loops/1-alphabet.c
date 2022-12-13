#include "main.h"

/**
 * print_alphabet - prints out alphabets, in lowercase after whch is a new line
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n);

}
