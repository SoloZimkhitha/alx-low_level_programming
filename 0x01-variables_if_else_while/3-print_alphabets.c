#include <stdio.h>
/**
 * main- prints the alphabet in lowercase, and then in uppercase
 *
 * Return: end with value 0
 */
int main(void)
{
	char alpl[] = "abcdefghijklmnopqrstuvwxyz";
	char alpU[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpl[i]);
		putchar(alpU[i]);
	}
	putchar('\n');
	return (0);
}
