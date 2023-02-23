#include"main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character should be printed
 * Return: empty
 */
void print_diagonal(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			_putchar(92);
		}
		_putchar ('\n');
	}
}
