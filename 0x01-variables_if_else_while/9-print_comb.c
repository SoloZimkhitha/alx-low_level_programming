#include <stdio.h>
/**
 * main- prints all possible combinations of single-digit numbers
 *
 * Return: end with value 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar((char)i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
