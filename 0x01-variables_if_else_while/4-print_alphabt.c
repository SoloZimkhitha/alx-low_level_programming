#include <stdio.h>
/**
 * main- prints alphabet in lower case except q and e function putchar
 *
 * Return: end with value 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
