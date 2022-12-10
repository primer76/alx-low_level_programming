#include <stdio.h>

/**
 * main - all numbers of bas 16 in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f;
	char j;

	for (f = 48; f < 58; f++)
	{
		putchar(f);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
