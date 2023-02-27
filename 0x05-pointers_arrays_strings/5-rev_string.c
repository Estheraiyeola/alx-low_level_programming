#include"main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	char rev;
	int i, j, count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	j = count -1;
	for (i = 0; i < count; i++)
	{
		rev[i] = s[i];
		j--;
	}
	_putchar (rev);
}
