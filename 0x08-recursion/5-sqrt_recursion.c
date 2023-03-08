#include"main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (recursive_sqrt(n, 1, n));
}
int recursive_sqrt(int n, int start, int end)
{
	if (end < start)
	{
		return (-1);
	}
	int mid = (start + end) / 2;
	int square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	if (square > n)
	{
		return (recursive_sqrt(n, start, mid - 1));
	}
	return (recursive_sqrt(n, mid + 1, end));
}
