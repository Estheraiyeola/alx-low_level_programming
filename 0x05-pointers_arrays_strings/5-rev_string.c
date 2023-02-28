#include"main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	char rev, *r;
	int i, j, count;

	while (s[count] != '\0')
	{
		count++;
	}
	for (j =1; j < count; j++)
	{
		r++;
	}
	for (i = 0; i < (count / 2); i++)
	{
		rev = s[i];
		s[i] = *r;
		*r = rev;
		r--;
	}
}
