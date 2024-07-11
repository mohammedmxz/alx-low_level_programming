#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 *
 * Return: Void
 */
void print_rev(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
