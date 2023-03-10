#include"main.h"

/**
 * _islower - check for lowercases
 * @c: the character to be checked
 * Return: 1 for lowercase, 0 for anyhing else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
	_putchar('\n');
}
