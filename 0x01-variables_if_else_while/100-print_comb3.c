#include<stdio.h>

/**
 * main - printing all possible different combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i != 57)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(j);
		}
		putchar(i);
	}
	putchar ('\n');

	return (0);
}
