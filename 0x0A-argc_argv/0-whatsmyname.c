#include <stdlib.h>
#include <stdio.h>

/**
 * main -  prints its name, followed by a new line
 * argc: parameter of type integer
 * argv: parameter of type character
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j = 0;
	
	printf("my name is\n");
	for (i = 1; i < argc; i++)
	{
	printf("argv[%d] = %s\n", i, argv[i]);
	}
	if (argc > 1)
	{
		printf("argv[%d] = %s", j, argv[j]);
	}
	return (0);
}
