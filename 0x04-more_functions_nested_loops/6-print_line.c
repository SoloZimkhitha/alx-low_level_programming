#include "main.h"
#include <ctype.h>
/**
 * print_line- draws a straight line in the terminal
 *@n: parameter of type int
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('$');
	_putchar('\n');
}
