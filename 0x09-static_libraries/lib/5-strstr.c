#include"main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to the string
 * @needle: pointer to the substring
 * Return: h or 0 if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack != '\0' && *n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (*n == '\0')
		{
			return (h);
		}
		haystack = h + 1;
	}
	return (0);
}
