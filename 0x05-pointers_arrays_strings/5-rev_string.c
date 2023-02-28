#include"main.h"
#include<stdio.h>

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char c;

	while (s[i++])
	{
		length++;
	}
	for (i = length - 1; i >= length / 2; i--)
	{
		c = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = c;
	}
}
