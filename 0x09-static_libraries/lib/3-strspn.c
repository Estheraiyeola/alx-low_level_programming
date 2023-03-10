#include"main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: a pointer containing the set of characters to be searched for
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p;
	unsigned int c = 0;

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				c++;
				break;
			}
		}
		if (*p == '\0')
		{
			return (c);
		}
		s++;
	}
	return (c);
	_putchar('\n');
}
