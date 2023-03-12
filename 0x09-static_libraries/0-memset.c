#include "main.h"
/**
 * _memset - entry point
 * @s: char s
 * @b: char b
 * @n: int n
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
int a = 0;
for (; n > 0; a++)
{
s[a] = b;
n--;
}

return (s);
}
