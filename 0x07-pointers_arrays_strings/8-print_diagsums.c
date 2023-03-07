#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: parameter of type integer
 * @size: parameter of type integer
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
