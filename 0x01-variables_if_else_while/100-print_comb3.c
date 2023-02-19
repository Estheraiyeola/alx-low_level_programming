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
			if (!((i == 48) || (j > i))
			{
				putchar(i);
				putchar(j);
				if (!(i == 57 && j == 56))
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
