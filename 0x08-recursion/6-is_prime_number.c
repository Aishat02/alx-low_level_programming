#include "main.h"

/**
 * check_prime -checks for prime number
 *@n: checks the input
 *@i: iterator
 * Return: square root or -1
 */

int check_prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
			return (0 + check_prime(n, i + 1));
					}

/**
 * is_prime_number - prime number
 *@n: checks the input
 * Return: 1 if input integer is a prime number
 * otherwise return 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	else
		return (check_prime(n, 2));
}
