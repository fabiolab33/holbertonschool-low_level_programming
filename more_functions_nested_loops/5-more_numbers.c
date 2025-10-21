#include "main.h"

/**
 * more_bumbers - print numbers from 0 to 14 ten times
 * Description: Prints numbers 0 to 14 ten times using _putchar
 * each followed by a new line
 *
 */
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
