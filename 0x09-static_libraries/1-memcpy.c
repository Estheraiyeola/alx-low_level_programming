#include"main.h"

/**
 * _memcpy - copies memory area
 * @dest: the memory area destination
 * @src: the memory area source
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n > 0)
	{
		*p++ = *src++;
		n--;
	}
	return (dest);
	_putchar('\n');
}
