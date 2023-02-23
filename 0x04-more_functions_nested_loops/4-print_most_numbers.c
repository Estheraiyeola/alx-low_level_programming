#include"main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 *
 * Description: excluding 2 and 4
 *
 * Return: numbers from 0 to 9
 */
void print_most_numbers(void)
{
	int i = 48;

	for (; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar ('\n');
}
