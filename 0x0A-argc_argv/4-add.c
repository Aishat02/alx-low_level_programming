#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of input characters
 *
 * Return: 1 if the program does not,
 * receive one of the number conatins,
 * symbols that are not digits
 * otherwise 0
 */
int main(int argc, char *argv[])
{
	int i, m, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (m = 0; argv[i][m]; m++)
		{
			if (argv[i][m] < '0' || argv[i][m] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}


