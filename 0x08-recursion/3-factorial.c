#include <stdio.h>
/**
 * factorial - prints factorial of n
 * @n: integer
 * Return: integer factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
