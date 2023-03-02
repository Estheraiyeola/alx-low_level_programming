#include"main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: is s1=s2 0, if s1<s2 1, if s2<s1 -1
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if (s1[i] == '\0' && s2[i] == '\0')
	{
		if (*s1 > *s2)
		{
			return (1);
		}
		else if (*s1 < *s2)
		{
			return (-1);
		}
		s1++;
		s2++;
	}
	return (0);
}
