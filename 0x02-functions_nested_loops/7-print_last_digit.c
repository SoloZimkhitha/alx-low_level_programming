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
	int last_digit = (n % 10);
	int asci_digit = last_digit + 48;

	_putchar((char)asci_digit);
	return (n % 10);
}
