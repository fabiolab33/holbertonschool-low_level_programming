#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Description: Use a loop and _putchar to print 0123456789
 * followed by a new line
 *
 */
void print_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
