#include"main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination value
 * @src: source value
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int i;

	while (dest[l])
	{
		l++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[l] = src[i];
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
