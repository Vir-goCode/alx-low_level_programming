#include  "main.h"

/**
 * factorial - find factorial n
 * @n: given number
 * Return: factorial of n
 */

int factorial(int n)
{
if (n < 0)if
return (-1);

if (n == 0)
{
return (1);
}
else
{
n = factorial(n - 1) * n;
return (n);
}
}