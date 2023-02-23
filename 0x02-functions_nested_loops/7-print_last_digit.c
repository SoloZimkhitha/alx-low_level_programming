#include "main.h"
#include <stdio.h>
/**
 * print_last_digit- prints last digit of a number
 *
 * @n: parameter of type int
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if(n < 0)
	{
		n = -n;
	}

	last_digit = n % 10;

	_putchar(last_digit + '0');
	return (n % 10);
}
