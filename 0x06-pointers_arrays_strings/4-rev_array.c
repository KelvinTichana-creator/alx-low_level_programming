#include "main.h"
/**
 * reverse_array - prints reversed array.
 * @a: array to be reversed.
 * @n: size of array.
 * Return: void (nothing)
 */
void reverse_array(int *a, int n)
{
	int swap, begin, end;

	begin = 0;
	end = n - 1;
	while (begin < end)
	{
		swap = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = swap;
		begin++;
		end--;
	}
}
