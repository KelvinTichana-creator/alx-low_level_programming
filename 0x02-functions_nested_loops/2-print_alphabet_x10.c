#include "main.h"
/**
 * print_aphabet_10x - prints the alphabet 10 times
 * Return: void (nothing)
 */
void print_alphabet_10x(void)
{
	int i;
	char c = 'a';

	while (i < 10)
	{
		while ( c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
		_putchar('\n');
	}
}
