#include"main.h"

/**
 * _strncpy - copies a string
 * @dest: destination value
 * @src: source value
 * @n: limit to the concatenation
 * Return: ptr
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	if (dest == 0)
	{
		return (0);
	}
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
