#include <stdio.h>

/**
 * main - prints small and capital letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char y;

	for (y = 'a'; y <= 'z', y++)
		putchar(y);
	for (y = 'A'; y <= 'Z', y++)
		putchar(y);
	putchar('\n');
	return (0);
}
