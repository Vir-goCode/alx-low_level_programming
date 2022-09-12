#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 * followed by a new line
 * Description: using the main function
 * Return: Always 0 (Success)
 */
int main(void)
{ 
int c;
for (c = 48; c <= 58; c++)
{
	putchar(c);
	if (c !=58)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n')
return (0);
}
