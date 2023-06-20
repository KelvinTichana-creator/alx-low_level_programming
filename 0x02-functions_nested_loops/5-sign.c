# include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number to be checked
 * Return: 1, 0, 0r -1
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}
