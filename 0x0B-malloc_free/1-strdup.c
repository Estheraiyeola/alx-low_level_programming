#include"main.h"
#include<stdlib.h>
#include<string.h>

/**
 * _strdup - allocates a pointer to a new space in memory
 * @str: string to be duplicated
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	size_t len = strlen(str) + 1;
	char *dst = malloc(len);

	if (str == NULL)
	{
		return (NULL);
	}

	if (dst != NULL)
	{
		memcpy(dst, str, len);
	}
	return (dst);
	free(dst);
}
