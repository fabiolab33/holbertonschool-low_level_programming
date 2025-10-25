#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: the integer value of the string, or 0 if no numbers found
 */
int _atoi(char *s)
{
int i = 0;
int sing = 1;
int result = 0;
int started = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
sing *= -1;
else if (s[i] == '+')
;


else if (s[i] >= '0' && s[i] <= '9')
{
started = 1;
result = result * 10 + (s[i] - '0');
}

else if (started)
break;

i++;
}

return (result * sing);
}
