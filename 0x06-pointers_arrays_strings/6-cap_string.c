#include"main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 * Return: 0
 */
char *cap_string(char *s)
{
	int i;
	int vsc = 0;
	char sc[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i]; ++i)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				_putchar(s[i]);
			}
		}
		else if (s[i -1] == sc[vsc])
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				_putchar(s[i]);
			}
		}
		else
		{
			_putchar(s[i]);
		}
	}
	return (0);
}
