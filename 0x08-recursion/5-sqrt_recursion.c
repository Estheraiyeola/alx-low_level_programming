#include"main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the root of a number
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	int r = _sqrt_recursion(n - 1) + 1;

	if (r * r > n)
	{
		return (-1);
	}
	else if (r * r == n)
	{
		return (r);
	}
	else
	{
		return (_sqrt_recursion(n - 1));
	}
}
