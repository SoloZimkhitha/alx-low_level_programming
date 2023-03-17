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
	int num;
	long int sum;

	sum = 0;

	if (argc == 1)
	{
		printf("%ld\n", sum);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		char *endptr;

	for (j = 0; arg[j] != '\0'; j++)
	{
		if (!isdigit(arg[j]))
		{
			printf("Error\n");
			return (1);
		}
	}

	num = strtol(arg, &endptr, 10);

	if (*endptr != '\0')
	{
		printf("Error\n");
		return (1);
	}

	sum += num;
}
	printf("%ld\n", sum);
return (0);
}
