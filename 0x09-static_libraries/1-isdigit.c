#include "main.h"
/**
 * _isdigit - entry point
 * @c: the value of the digit
 * Return: the returned value int
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
