#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 *
 * Return: Void
 */
void puts_half(char *str)
{
	int i, j, n;
	int len = 0;

	for (i = 0; str[i]; i++)
	{
		len++;
	}
	if (len > 400)
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len / 2) - 1;
	if (len > 400)
	{
		for (j = n; j < len - 1; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = n; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
