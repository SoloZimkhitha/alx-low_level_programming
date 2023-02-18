#include <stdio.h>
/**
 * main- prints alphabet in lower case using function putchar
 *
 * Return: end with value 0
 */
int main(void)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
