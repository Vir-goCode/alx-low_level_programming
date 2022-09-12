#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 * followed by a new line
 * Description: using the main function
 * Return: Always 0 (Success)
 */
int main(void)
{ 
int n;
char c;
for (n = 48; n <= 58; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
