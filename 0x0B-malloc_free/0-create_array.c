#include"main.h"
#include<stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: the size of the array
 * @c: the character to be created
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
