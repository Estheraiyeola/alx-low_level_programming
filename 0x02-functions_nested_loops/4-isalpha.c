#include"main.h"

/**
 * _isalpha - checks whether a character is an alphabet
 * @c: the character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase or 0 if otherwise
 */
int _isalpha(int c)
{
	char c;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
