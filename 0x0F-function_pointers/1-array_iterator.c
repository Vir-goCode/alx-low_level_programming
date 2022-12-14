#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute fuction on an array
 * @array: array to operate on
 * @size: size of array
 * @action: fuction to execute
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (!array || !action)
return;

for (i = 0; i < size; i++)
action(array[i]);
}
