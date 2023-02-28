#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - prints the second half of the string
 *
 * @str: parameter of type character
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int half_len = len / 2;

	for (i = half_len; i < len + 1; i++)
	{
		_putchar(str[i]);
	}
		_putchar ('\n');
}
