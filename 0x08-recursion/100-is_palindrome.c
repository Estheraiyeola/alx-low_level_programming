#include"main.h"

int is_palindrome_helper(char *s);

/**
 * is_palindrome - returns a string
 * @s: the string
 * Return: the integer value
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (is_palindrome(s));
	}
}
/**
 * is_palindrome_helper - checks if a string is empty
 * @s: the string to be checked
 * Return: the integer value
 */
int is_palindrome_helper(char *s)
{
	int l = 1 + _strlen_recursion(s + 1);

	if (*s == s[l])
	{
		s++;
		l++;
	}
	else
	{
		return (0);
	}
	return (1);
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to be checked
 * Return: the integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
