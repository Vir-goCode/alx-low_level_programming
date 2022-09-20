#include "main.h"

/**
 * swap_int - swaps two integer values
 * @a: first integer
 * @b: second integer
 * Returns: returns nothing
 */

void swap_int(int *a, int *b);
{
int tmp = *a;

*a = *b;
*b = tmp;
}
