#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[11];
	int i;

	/* prompts the random number generator */
	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		/* generates a random character from A-Z */
		password[i] = (char)('A' + (rand() % 26));
	}

	/* terminate the string */
	password[10] = '\0';

	printf("%s\n", password);

	return (0);
}
