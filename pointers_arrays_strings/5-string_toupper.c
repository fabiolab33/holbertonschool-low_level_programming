#include "main.h"

/**
 * string_toupper - changes all lowecase letters of a string to uppercase
 * @str: string to modify
 *
 * Description: converts all lowercase lettes in a string to uppercase
 * by checking each character and converting it if it's between 'a' and 'z'.
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
int i;

i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
i++;
}
return (str);
}
