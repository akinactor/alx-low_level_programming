#include "main.h"
/**
 * _islower - Function to check for lower case
 *@c: char
 * Return: return 1 if it's lowercase and 0 if otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
