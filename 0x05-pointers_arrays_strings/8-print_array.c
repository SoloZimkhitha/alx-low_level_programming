#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 *
 * @ *a: 1st parameter to type integer
 * @n: 2nd parameter to type integer
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	char i;
	int *a = i;
	i = &a;
	int array[i];
	n = sizeof(numbers) / sizeof(numbers[0]);

	for (i = 0; i < n; i++)
	{
		printf("%d", *a);
		printf("%d", array[i]);
	}
	if (i != n - 1)
	{
		printf(", ");
	}

	printf('\n');
}
