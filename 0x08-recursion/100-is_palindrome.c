#include "main.h"

/**
 * is_palindrome -  check if a string is a palindrome
 * @s: the string
 * Return: 1 if is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	return (compare(s, s + _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string
 * Return: the length of s.
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}

/**
 * compare - compare string 2 strings
 * @str1: string 1
 * @str2: string 2
 * Return: 1 if str1 is the same as str2, otherwise 0
 */
int compare(char *str1, char *str2)
{
	if (!*str1)
		return (1);

	if (*str1 != *str2)
		return (0);

	return (compare(str1 + 1, str2 - 1));
}
