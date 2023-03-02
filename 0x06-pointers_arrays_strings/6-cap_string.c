#include"main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 * Return: 0
 */
char *cap_string(char *s)
{
	int a;
	int i;
	int vsc = 0;
	char sc[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (s[a])
	{
		while (i < vsc)
		{
			if ((a == 0 || s[a -1] == sc[i]) && (s[a] >= 'a' &&  s[a] <= 'z'))
			{
				s[a] = s[a] - 32;
			}
			i++;
		}
		a++;
	}
	return (0);
}
