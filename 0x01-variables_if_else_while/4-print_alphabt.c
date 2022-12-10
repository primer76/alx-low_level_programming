#include <stdio.h>

/**
 * main - prints alphabet except e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char k;
	k = 'a';

	while (k <= 'z')
	{
		if (k != 'e' && k != 'q')
		{
			putchar(k);
		}
		k++;
	}
	putchar('\n');
	return (0);
}
