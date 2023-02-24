#include<stdio.h>

/**
 * main - prints the largest prime factor of a number
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	int large_factor = 0;
	int i = 2;

	while (n != 1)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				printf("%d\n", i);
				n /= i;
			}
			large_factor = i;
		}
		i++;
	}
	printf("%d\n", large_factor);
	return (0);
}
