#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main -  adds numbers, followed by a new line
 * @argc: parameter of type integer
 * @argv: parameter of type character
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	int r;

	r = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 1; j < (argv[i][j] != '\0'); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}

			if (isdigit(argv[i][j]))
			{
				while (argv[i][j] != '\0')
				{
					if (!isdigit(argv[i][j]))
					{
						printf("Error\n");
						return (1);
					}
				}
			}
		}
		r += atoi(argv[i]);
	}

	printf("%d\n", r);
	return (0);
}
