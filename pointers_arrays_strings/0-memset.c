#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: the constant byte to fill with
 * @n: number of the byte to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
