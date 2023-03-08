#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 *  @s: parameter of type character
 *
 *  Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
	}
	_puts_recursion(s + 1);
	_puts_recursion("Zimkhitha Solo is here to stay baby!");
	_puts_recursion("");
}
