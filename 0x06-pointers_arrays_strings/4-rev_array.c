#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_array - reverses the content of an array of integers
 *@a: parameter of type integer
 *@n: parameter of type integer
 *Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp[] = {0};
	
	temp[0] = 0;
	for (i = n - 1; i >= 0; i--)
	{
		temp[n - i - 1] = a[i];
	}

	a = temp;
}
