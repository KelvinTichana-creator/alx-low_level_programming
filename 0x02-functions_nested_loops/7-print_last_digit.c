#include "main.h"
/**
 * print_last_digit - rints the last digit of a number
 * @n: number to be checked
 * Return: last digit
 */
int print_last_digit(int n)
{
	int i = 0;

	i = n%10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
