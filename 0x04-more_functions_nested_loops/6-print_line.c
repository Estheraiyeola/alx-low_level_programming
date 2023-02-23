#include"main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of thimes the character will be printed
 * Return: empty
 */
void print_line(int n)
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
			_putchar(95);
		}
		_putchar ('\n');
	}
}
