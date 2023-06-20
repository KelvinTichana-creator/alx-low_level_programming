#include "main.h"
/**
 * main - prints the alphabet 10 times
 * Return: 0
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
