#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 *
 * @a:first integer
 * @b:2nd integer
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
