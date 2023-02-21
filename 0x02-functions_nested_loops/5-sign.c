#include "main.h"
/**
 *print_sign- prints sign of a number
 *
 * @n: input character of type int
 * Return: the sign of a number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
