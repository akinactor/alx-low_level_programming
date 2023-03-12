#include "main.h"
/**
 * _puts - entry point
 * @str: the string to be printed
 * Return: the return value is void
 */
void _puts(char *str)
{

while (*str != '\0')
{
_putchar(*str++);

}
_putchar('\n');
return;


}
