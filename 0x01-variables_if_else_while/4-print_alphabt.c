#include<stdio.h>
/**
 * main - printing the alphabets in lowercase exempting q and e
 * Return: Always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar ('\n');

	return (0);
}
