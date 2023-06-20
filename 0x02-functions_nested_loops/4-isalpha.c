#include "main.h"
/**
 * _isalpha -checks for alphabetic character
 * Return: 1 or 0
 * @c: character to be checked
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
