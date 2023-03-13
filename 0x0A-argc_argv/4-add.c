#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * main - prints positive integers
 * @argc: counts the arguments
 * @argv: vector to the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			while (argv[i][j] != '\0')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
