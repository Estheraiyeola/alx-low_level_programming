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
		return (0);
	}
	int a1 = (int) s1[i];
	int a2 = (int) s2[i];

	if (a1 > a2)
	{
		return (1);
	}
	if (a2 > a1)
	{
		return (-1);
	}
}
