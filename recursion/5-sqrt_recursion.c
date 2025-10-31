#include "main.h"

/**
 * find_sqrt_down - find the natural square root
 * @n: number to find the square root of
 * @x: current number being tested
 *
 * Description: this helper funtion uses recursion to test
 * incrementally which number squared equals @n. It returns
 * the natural square root if found, or -1 otherwise.
 *
 * Return: the natural square root, or -1 if none exists
 */
int find_sqrt(int n, int x)
{
if (x * x == n)
return (x);
if (x * x > n)
return (-1);
return (find_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the natural square root, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (find_sqrt(n, 0));
}
