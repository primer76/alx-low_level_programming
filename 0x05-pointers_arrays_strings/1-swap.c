#include "main.h"

/**
 * swap_int - swaps the two values of integers
 * @a : first integer
 * @b : second integer
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
