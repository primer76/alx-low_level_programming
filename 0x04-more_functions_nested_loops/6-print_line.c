#include "main.h"

/**
 * print_line  - draws straight line
 * @n : character to be checked
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int w;

for (w = 1; w <= n; w++)
{
_putchar('_');
}
_putchar('\n');
}
}
