#include"main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to the string to be printed
 * Return: empty
 */
void _puts_recursion(char *s)
{
	int i;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		i++;
	}
	_putchar('\n');
	i++;
}
