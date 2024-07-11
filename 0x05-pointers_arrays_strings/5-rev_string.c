#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: Void
 */
void rev_string(char *s)
{
	int i;
	int len = 0;
	char srev[1200];

	for (i = 0; s[i]; i++)
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		srev[i] = s[(len - i) - 1];
	}
	srev[i] = '\0';

	for (i = 0; i <= len; i++)
	{
		s[i] = srev[i];
	}
}
