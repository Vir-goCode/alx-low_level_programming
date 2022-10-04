#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Pointer to the new string (Success), NULL (Error)
 */

char *argstostr(int ac, char **av)
{
int r, d, k, len;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (r = 0; r < ac; r++)
{
for (d = 0; av[r][d] != '\0'; d++)
len++;
len++;
}
str = malloc(sizeof(char) * (len + 2));

if (str == NULL)
return (NULL);

k = 0;

for (r = 0; r < ac; r++)
{
for (r = 0; av[r][d] != '\0'; d++)
{
str[k] = av[r][d];
k++;
}
str[k] = '\n';
k++;
}
return (str);
}
