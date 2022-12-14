#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n : code to be checked
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	int a;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}
