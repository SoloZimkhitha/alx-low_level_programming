#include "main.h"
#include <ctype.h>
/**
 * _isalpha- checks if character is alpha
 *
 * @c: parameter of type int
 * Return: 1 if c is alpha otherwise 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
