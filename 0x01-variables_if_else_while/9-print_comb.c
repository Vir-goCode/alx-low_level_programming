#include <stdio.h>
/**
*main - print all combinations of single-digit numbers
*Description: using the main function
*Return: Always 0 (Success)
*/
int main(void)
{
int c;
for (c = 48; c <= 57; c++)
{
putchar(c);
if (c != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
