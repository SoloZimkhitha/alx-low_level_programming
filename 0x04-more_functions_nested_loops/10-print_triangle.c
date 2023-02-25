#include "main.h"
#include <stdio.h>
/**
 * print_triangle- prints triangle
 *
 * @size: parameter of type integer
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= size - i; j++)
	{
		_putchar(32);
	}
	for (j = 1; j <= i; j++)
	{
		_putchar(35);
	}
	_putchar('\n');
	}
}
