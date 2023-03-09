#include "main.h"
int normal_sqrt(int n, int a);
/**
 * _sqrt_recursion - Entry point
 * @n: integer
 * Return: int
 */


int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (normal_sqrt(n, 0));

}
/**
 * normal_sqrt - second entry point
 * @n: integer
 * @a: int
 * Return: int
 */
int normal_sqrt(int n, int a)
{
if (a * a > n)
return (-1);

if (a * a == n)
return (a);
return (normal_sqrt(n, a + 1));
}
