#include "main.h"
#include <ctype.h>
/**
 * print_line- draws a straight line in the termina
 *
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
