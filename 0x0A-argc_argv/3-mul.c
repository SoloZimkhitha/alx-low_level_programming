#include <stdlib.h>
#include <stdio.h>

/**
 * main -  multiplies, followed by a new line
 * @argc: parameter of type integer
 * @argv: parameter of type character
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y, r;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	r = x * y;
	printf("%d\n", r);
	return (0);
}
