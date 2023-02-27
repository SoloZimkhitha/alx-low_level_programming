#include <stdio.h>
#include "main.h"

/**
 * reset_to_98- function that takes a pointer to an int as parameter
 * @*n: parameter of type int pointer
 * Return: nothing
 */
void reset_to_98(int *n)
{
	int i;

	i = 98;
	*n = i;
}

