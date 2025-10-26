#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy from src
 *
 * Description: coies at most n bytes ftom src to dest. If src is less
 * than n bytes, remainder of dest will be filled with null bytes.
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
