#include<stdio.h>

/**
 * main - printing all possible different combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i ! = j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 57 && j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');

	return (0);
}
