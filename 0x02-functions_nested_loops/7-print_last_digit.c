#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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

	n = abs(n);
	last_digit = n % 10;

	_putchar(last_digit + '0');
	return (n % 10);
}
