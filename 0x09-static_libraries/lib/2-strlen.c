#include"main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to get the length
 * Return: length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
	_putchar('\n');
}
