#include "main.h"

/**
 * _memset - fills memmory witha constant byte
 * @s: memory area to be filled
 * @b: charto be copied
 * @n: number of times to copy b
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
for (; n > 0; n--)
{
s[n - 1] = b;
}

return (s);
}
