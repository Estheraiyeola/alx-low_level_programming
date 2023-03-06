#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a matrix
 * @a: pointer to the array
 * @size: size of the matrix
 * Return: empty
 */
void print_diagsums(int *a, int size)
{
	int sum_1 = 0;
	int sum_2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_1 += *(a + i * size + i);
		sum_2 += *(a + i * size + (size - 1 - i));
	}
	printf("%d", sum_1);
	printf(",");
	printf(" ");
	printf("%d", sum_2);
	printf("\n");
}
