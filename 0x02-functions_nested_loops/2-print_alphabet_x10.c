#include "main.h"
/**
 * main - prints the alphabet 10 times
 * Return: 0
 */
int main(void)
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
	return (0);
}
