#include <stdio.h>

/**
 *main- prints numbers 0 - 9
 *
 *Return: end with value 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar((char)i);
	}
	putchar('\n');
	return (0);
}
