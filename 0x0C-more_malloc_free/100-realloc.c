#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int i, max = new_size;
char *oldp = ptr;

if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}

else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);

p = malloc(new_size);
if (p == NULL)
return (NULL);
if (new_size > old_size)
max = old_size;
for (i = 0; i < max; i++)
p[i] = oldp[i];
free(ptr);
return (p);
}
