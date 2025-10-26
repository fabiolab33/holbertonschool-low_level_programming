#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: source string to append
 *
 * Description: This function appends the src string to the dest string
 * overwriting the terminating null bute at the end of dest, and the
 * adds a terminating null byte.
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
