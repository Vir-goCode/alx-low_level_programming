#include "main.h"

/**
 * _strncpy - copies a string
 * @src: second string to copy from
 * @dest: string to be overwritten
 * @n: number of values to copy
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;

while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
