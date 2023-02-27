#include"main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 * Return: 0
 */
void print_rev(char *s)
{
	int length, i;

	length = 0;

	for (i = length; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar ('\n');
}
