nclude "main.h

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 * Return: string
 */

char *rot13(char *s)
{
char c[] = {"NOPQRSTUVWXYZABCDEFGHIJKLM[\\]^_`nopqrstuvwxyzabcdefghijklm"};

int i;

for (i = 0; src[i] != '\0'; i++)
{
if (src[i] >= 'A' && src[i] <= 'z')
src[i] = c[src[i] - 'A'];
}

return (src);
}
