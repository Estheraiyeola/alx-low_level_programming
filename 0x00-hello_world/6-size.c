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
	/* Sizeof of data types */
	printf("Size of a char is: %ld bytes\n",sizeof(c));
	printf("Size of an int is: %ld bytes\n",sizeof(i));
	printf("Size of a long int: %ld bytes\n",sizeof(li));
	printf("Size of a long long int: %ld bytes\n",sizeof(lli));
	printf("Size of a float: %ld bytes\n",sizeof(f));
	return (0);
}
