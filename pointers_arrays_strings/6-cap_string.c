#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to modify
 *
 * Description: capitalizs the first letter of each world. Worlds are
 * separed by spaces, tabulation, new line, and puntuation marks.
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
int i, capitalize_next;

capitalize_next = 1;
i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z' && capitalize_next == 1)
{
str[i] = str[i] - 32;
capitalize_next = 0;
}
else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
capitalize_next = 1;
}
else
{
capitalize_next = 0;
}
i++;
}
return (str);
}
