#include <stdlib.h>
#include <stdio.h>

/**
 * main -  prints a number followed by a new line
 * argc: parameter of type integer
 * argv: parameter of type character
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	printf("argc = %d\n", argc);
	for (i = 0; i < argc; i++)
		{
		printf("argv[%d] = %s\n", i, argv[i]);
		}
	return (0);
}
