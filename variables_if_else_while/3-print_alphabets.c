#include <stdio.h>

/**
 * main - Entry point
 * Description: Print the lowercase alphabet and then uppercase
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);

putchar('\n');
return (0);
}
