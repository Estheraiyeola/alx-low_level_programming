#include"main.h"
#include"string.h"

/**
 * infinite_add - adds two integers together
 * @n1: first integer to be added
 * @n2: second integer to be added
 * @r: buffer where the integers will be stored
 * @size_r: size of the buffer
 * Return: 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c = 0;
	int i, j, k;

	for (i = strlen(n1) - 1, j = strlen(n2), k = 0;
	i >= 0 || j >= 0 || c;
	i--, j--, k++)
	{
		int s = c;

		if (i >= 0)
		{
			s += n1[i] + '0';
		}
		if (j >= 0)
		{
			s += n2[j] + '0';
		}
		if (k >= size_r)
		{
			return (0);
		}
		r[k] = s % 10 + '0';
		c = s / 10;
	}
	r[k] = '\0';
	return (0);
}
