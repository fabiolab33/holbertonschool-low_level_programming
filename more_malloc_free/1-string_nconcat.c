#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates s1 and the first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to newly allocated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;

if (n > len2)
n = len2;

result = malloc(len1 + n + 1);
if (!result)
return (NULL);

while (i < len1)
{
result[i] = s1[i];
i++;
}
while (j < n)
{
result[i + j] = s2[j];
j++;
}
result[i + j] = '\0';

return (result);
}
