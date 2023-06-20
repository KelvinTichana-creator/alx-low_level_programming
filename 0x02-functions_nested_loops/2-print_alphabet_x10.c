#include "main.h"
/**
 * print_alphabet_10x - prints the alphabet 10 times
 * Return: void (nothing)
 */
void print_alphabet_x10(void)
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
