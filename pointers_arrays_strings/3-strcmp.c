#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: firts string
 * @s2: secomd string
 *
 * Description: Compares two strings and returns an integer indicating
 * the relationship between them.
 * Return: 0 if s1 and s2 are equal, negative if s1 < s2, positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
int i;

i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (s1[i] - s2[i]);
}
