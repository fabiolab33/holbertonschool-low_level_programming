#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints whether a random number is positive, zero or negative
 *
 * Return: Always 0 (Seccess)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%d ", n);

if (n > 0)
printf("is positive\n");
else if (n == 0)
printf("is zero\n");
else
printf("is negative\n");

return (0);
}
