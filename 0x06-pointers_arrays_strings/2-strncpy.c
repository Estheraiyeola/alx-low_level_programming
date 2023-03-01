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

	while ((*ptr++ = *src++) != '\0')
	{
		continue;
	}
	return (dest);
}
