#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 * Return: void (nothing)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}