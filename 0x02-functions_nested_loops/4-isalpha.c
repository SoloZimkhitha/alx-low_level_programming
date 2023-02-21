#include "main.h"
#include <ctype.h>
/**
 * _isalpha-  checks for alphabetic character
 *
 * @c: input parameter of type int
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
