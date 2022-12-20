#include "main.h"
#include <stdio.h>

/**
 * print_array - prints number of elements of an array
 * followed by new line
 * @a : code a to be checked
 * @n : code b to be checked
 */

void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < n; ++r)
	{
		if (r != (n - 1))
			printf("%d, ", a[r]);
		else
			printf("%d", a[r]);
	}
	printf("\n");
}
