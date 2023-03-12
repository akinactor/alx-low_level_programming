#include "main.h"
/**
 * _strlen - Function that returns length of string
 * @s: the entered string
 * Return: the return value is int
 */
int _strlen(char *s)
{
int leng = 0;
while (*s != '\0')
{
leng++;
s++;
}
return (leng);

}
