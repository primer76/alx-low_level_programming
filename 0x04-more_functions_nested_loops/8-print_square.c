#include "main.h"

/**
 * print_square - prints square
 * @size : size of the square
 */

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int f, g;

for (f = 0; f < size; f++)
{
for (g = 0; g < size; g++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
