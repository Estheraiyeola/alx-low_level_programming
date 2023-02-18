#include<stdio.h>
/**
 * main - printing numbers 0-9 with the putchar function
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar ('\n');
	return (0);
}
