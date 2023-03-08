#include"main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the root of a number
 */
int _sqrt_recursion(int n)
{
	int root = _sqrt_recursion(n / 4);

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	root *= 2;
	if (root * root < n)
	{
		return (root - 1);
	}
	else
	{
		return (root);
	}
}
