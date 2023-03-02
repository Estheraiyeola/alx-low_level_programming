#include"main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to be encoded
 * Return: n
 */
char *leet(char *n)
{
	int a, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[a] == s1[j])
			{
				n[a] = s2[j];
			}
		}
	}
	return (n);
}
