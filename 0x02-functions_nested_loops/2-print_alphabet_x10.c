#include"main.h"

/**
 * print_alphabet_x10 - printing lowercase alphbets ten times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		i = i * 10;
		_putchar(i);
	}
	_putchar ('\n');
}
