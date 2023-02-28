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
	int n = (len - 1) / 2;

	for (i = 0; i < half_len; i++)
	{
		_putchar(str[i]);
	}
		_putchar ('\n');
		if (len % 2 == 1)
	{
			half_len = (len - 1) / 2;
			half_len = n;
	}
}
