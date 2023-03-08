#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 *  @s: parameter of type character
 *
 *  Return: nothing
 */
void _puts_recursion(char *s)
{
	puts(s);
	_putchar('\n');
}
