#include "main.h"
/**
 * _islower - 1 if a character is a letter, lowercase or uppercase
 *@c: the character to be checked
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
