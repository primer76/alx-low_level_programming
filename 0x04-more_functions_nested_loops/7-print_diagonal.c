#include "main.h"

/**
 * print_diagonal - draws diagonal line on terminal
 * @n : number of times character is printed
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int a, b;

for (a = 0; a < n; a++)
{
for (b = 0; b < n; b++)
{
if (j == 1)
_putchar('\\');
else if (j < 1)
_putchar(' ');
}
_putchar('\n);
}
}
}
