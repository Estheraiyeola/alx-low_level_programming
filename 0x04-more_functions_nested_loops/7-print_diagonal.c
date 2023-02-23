#include"main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character should be printed
 * Return: empty
 */
void print_diagonal(int n)
{
	int l, m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < n; l++)
		{
			for (m = 0; m < l; m++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar ('\n');
		}
	}
}
