#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Description: re[laces certain letters with numbers: a/A->4, e/E->3,
 * o/O->0, t/T->7, l/L->1. Uses only one if and two loops.
 * Return: pointer to the encode string
 */
char *leet(char *str)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";

i = 0;
while (str[i] != '\0')
{
j = 0;
while (j < 10)
{
if (str[i] == letters[j])
{
str[i] = numbers[j];
}
j++;
}
i++;
}
return (str);
}
