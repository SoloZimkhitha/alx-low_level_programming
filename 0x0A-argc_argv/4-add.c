#include <stdlib.h>
#include <stdio.h>

/**
 * main -  prints its name, followed by a new line
 * @argc: parameter of type integer
 * @argv: parameter of type character
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, r, num;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if(scanf(argv[i], "%d", &num) != 1)
		{
			printf("Error\n");
			return (1);
		}
		r += num;
	}

	printf("%d\n", r);
	return (0);
}
