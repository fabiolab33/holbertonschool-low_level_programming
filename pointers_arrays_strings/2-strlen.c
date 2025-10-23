#include "main.h"

/**
 * _strlen - retruns the lenght of a string
 * @s: Pointer to the string
 *
 * Return: The lenght of the string
 */
int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}
return (len);
}
