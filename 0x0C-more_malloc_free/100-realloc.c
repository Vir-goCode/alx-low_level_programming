#include "main.h" 
#include  <stdlib.h>

/**
 * realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
int i, l;
int *a;

if (min > max)
return (NULL);
l = max - min + 1;
a = malloc(sizeof(int) * l);
if (a == NULL)
return (NULL);
for (i = 0; i < l; i++, min++)
{
a[i] = min;
}
return (a);
 
