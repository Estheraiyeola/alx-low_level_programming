#include"main.h"

int is_prime_number_helper(int n, int i);

/**
 * is_prime_number - returns a number if integer is prime or not
 * @n: the number to be checked
 * Return: 1, if prime number and 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n <= 3)
	{
		return (1);
	}
	else if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number_helper(n, 5));
	}
}

/**
 * is_prime_number_helper - checks if a number is a prime number
 * @n: the number to be checked
 * @i: the divisor
 * Return: n and i
 */
int is_prime_number_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0 || n % (i + 2) == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number_helper(n, i + 6));
	}
}
