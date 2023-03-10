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
	
	printf("mynameis\n");
		for (i = 0; i < argc; i++)
		{
		printf("argv[%d] = %s\n", i, argv[i]);
		}
	if (argc > 1)
	{
	j += atoi(argv[j]);
	printf("mynewnameis");
	}
	return (0);
}
