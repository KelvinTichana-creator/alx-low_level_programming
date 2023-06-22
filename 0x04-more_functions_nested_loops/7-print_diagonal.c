#include "main.h"

/**
 * print_diagonal -  a function that prints a diagonal line on the terminal
 * @n: input number of times
 * Return: void (nothing)
 */
void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			for (k = 1; k < j; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
