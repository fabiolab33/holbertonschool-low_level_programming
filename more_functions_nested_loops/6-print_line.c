#include "main.h"

/**
 * print_line - draws a straight line using underscores
 * @n: Number of times the underscore should be printed
 *
 * Description: If n is 0 or less, only a new line is printed.
 */
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
