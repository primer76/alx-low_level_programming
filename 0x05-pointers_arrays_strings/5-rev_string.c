#include "main.h"

/**
 * rev_string - reverses a string
 * @s : code to be reversed
 */

void rev_string(char *s)
{
	int j, k;
	char y;

	for (j = 0; s[j] != '\0'; ++j)
		;

	for (k = 0; k < j / 2; ++k)
	{
		y = s[k];
		s[k] = s[j - 1 - k];
		s[j - 1 - k] = y;
	}
}
