#include <stdio.h>
/**
 * _putchar- prints characters
 *
 * Return: Always 0
 */
void _putchar(char chars[])
{
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(chars[i]);
	}
	putchar('\n');
}
