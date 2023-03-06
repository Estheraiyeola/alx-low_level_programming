#include"main.h"

/**
 * _strchr - locates a character string
 * @s: a pointer to the null terminated string
 * @c: the character to be searched for in string s
 * Return: s, if c is found , 0 if c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
