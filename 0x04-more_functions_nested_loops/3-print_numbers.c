#include "main.h"
#include <ctype.h>
/**
 * print_numbers- prints the numbers, from 0 to 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar((char)i + 48);
	}
}
