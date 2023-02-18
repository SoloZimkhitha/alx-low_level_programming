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
		char current = alp[i];

		if (current != 'q' || current != 'e')
		{
			putchar(alp[i]);
		}
	}
	putchar('\n');
	return (0);
}
