#include "main.h"
/**
 *main - prints a string
 *
 *_puts_recursion - prints a string, followed by a new line
 *
 *s- reference to the string to be printed
 *
 * return - 0
 */

void _puts_recursion(char *s)
{
	_puts_recursion(s + 1);
	_putchar(*s'\n');
}

