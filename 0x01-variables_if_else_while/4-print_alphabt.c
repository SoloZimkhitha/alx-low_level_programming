#include <stdio.h>
/**
 * main- prints alphabet in lower case except q and e function putchar
 *
 * Return: end with value 0
 */
int main(void)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alp[i] != 'q' || alp[i] != 'e')
		{
			putchar(alp[i]);
		}
	}
	putchar('\n');
	return (0);
}
