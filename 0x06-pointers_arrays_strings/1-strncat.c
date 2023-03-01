#include"main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination value
 * @src: source value
 * @n: limit to the concatenation
 * Return: dest
 */
char*_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i = 0;

	while (dest[l])
	{
		l++;
	}
	while (i < n && src[i])
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l + n + 1] = '\0';
	return (dest);
}
