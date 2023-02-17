#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
}
{
	printf("size of a char is:%lu.\n", (unsigned long)sizeof(c), "byte(s):%lu.\n");
	printf("size of an int is:%lu.\n", (unsigned long)sizeof(i), "byte(s):%lu.\n");
	printf("size of a long int:%lu.\n", (unsigned long)sizeof(li), "byte(s):%lu.\n");
	printf("size of a long long int:%lu.\n", (unsigned long)sizeof(lli), "byte(s):%lu.\n");
	printf("size of a float:%lu.\n", (unsigned long)sizeof(f), "byte(s):%lu.\n");
	return (0);
}
