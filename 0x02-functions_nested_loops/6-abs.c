/**
 *_abs - retuns the absolute number
 * @n: number to be checked
 * Return: int (unsigned)
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
