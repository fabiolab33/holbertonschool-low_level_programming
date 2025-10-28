#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destinantion memory area
 * @src: source memory area
 * @n: number of the byte to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
