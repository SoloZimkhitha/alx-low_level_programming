#include "main.h"
#include <stdio.h>
/**
 * times_table- prints 9 timetables starting with 0
 *
 * Return: 9 times table
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		printf("9 x %d = %d\n", i, 9 * i);
	}
}
