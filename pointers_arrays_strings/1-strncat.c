#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string to append
 * @n: maximum number of bytes to use from src
 *
 * Description: This funtion appens the src string to the dest string
 * using at most n bytes from src, and the result will be null-terminated.
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';

return (dest);
}
