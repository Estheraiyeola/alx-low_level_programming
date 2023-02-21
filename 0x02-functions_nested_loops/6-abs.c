#include"main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: the number to be computed
 * Return: Absolute value of the integer or 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_num;
		
		abs_num = c * -1;
		return (abs_num);
	}
	return (c);
}
