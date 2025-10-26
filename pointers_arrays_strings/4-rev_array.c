#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of the elements to swap
 *
 * Description: reverses the content of an array of integers by swapping
 * elements from the beginning and end moving towards the center.
 */
void reverse_array(int *a, int n)
{
int i, temp;

i = 0;
while (i < n / 2)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
i++;
}
}
