#include"main.h"

/**
 * print_number - prints an integer
 * @n: the number to be printed
 * Return: 0
 */
void print_number(int n)
{
	int *i;

	int *i = &n;
	_putchar(*i);
	return (0);
}
