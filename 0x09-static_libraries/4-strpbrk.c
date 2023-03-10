#include"main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the set of characters to be searched for
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	for (; *s != '\0'; s++)
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
	}
	return (0);
	_putchar('\n');
}
