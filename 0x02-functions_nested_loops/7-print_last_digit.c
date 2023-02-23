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
	int last_digit = abs(n) % 10;

	printf("%d\n", last_digit);
	return (n % 10);
}
