#include"main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to be encoded
 * Return: s
 */
char *leet(char *s)
{
	int a = 0;
	int b = 0;
	int j = 5;
	char f[5] = {'A', 'E', 'O', 'I', 'L'};
	char g[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;
		
		while (b < l)
		{
			if (s[a] == r[b] || s[a] - 32 == r[b])
			{
				s[a] = n[b];
			}
			b++;
		}
		a++;
	}
	return (s);
}
