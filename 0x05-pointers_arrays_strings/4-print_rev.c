#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string
 * Return: nothing
 */

void print_rev(char *s)
{
int len = strlen(s);

while (len--)
_putchar(*(s + len));
_putchar(10);
}
