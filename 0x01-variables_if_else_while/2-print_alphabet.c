#include <stdio.h>

/**
 * main - lists alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	x = 'a';

	while (x <= 'z')
	{
		putchar("\n", x);
		x++;
	}
	return (0);
}
