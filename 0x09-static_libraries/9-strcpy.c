#include "main.h"
/**
 * _strcpy - entry point
 * @dest: at dest
 * @src: at src
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
int leng = 0;
while (*(src + leng) != '\0')
{
*(dest + leng) = *(src + leng);
leng++;


}
*(dest + leng) = '\0';
return (dest);



}
