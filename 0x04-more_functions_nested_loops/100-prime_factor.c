#include<stdio.h>

/**
 * main - prints the largest prime factor of a number
 * Return: 0
 */
int main(void)
{
	long int n;
	n = 612852475143;
	long int div = 2, ans = 0, maxf;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div += 1;
		}
		else
		{
			maxf = n;
			n /= div;

			if (n == 1)
			{
				printf("%d", maxf);
				ans = 1;
				break;
			}
		}
	}
	return (0);
}
