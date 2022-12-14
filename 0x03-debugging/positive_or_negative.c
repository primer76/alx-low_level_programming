#include <stdio.h>

/**
 * positive_or_negative - contains code to check positive or negative
 * @i : code to be checked
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
