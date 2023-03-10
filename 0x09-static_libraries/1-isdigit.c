#include "main.h"
#include <ctype.h>
/**
 * _isdigit- checks if character is digit
 *
 * @c: parameter of type int
 * Return: 1 if c is uppercase otherwise 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
