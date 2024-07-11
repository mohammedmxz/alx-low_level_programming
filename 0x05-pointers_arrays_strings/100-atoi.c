#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the sting.
 * Return: an integer.
 */
int _atoi(char *s)
{
	int num_of_minus = 0;
	int result = 0, i;
	unsigned int j;
	int start, end;

	if (*s == '\0')
		return (result);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
			break;
		if (s[i] == '-')
			num_of_minus++;
	}

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			start = i;
			while (s[i] >= 48 && s[i] <= 57)
				i++;
			end = i;
			break;
		}
	}

	for (j = 1, i = end - 1; i >= start; i--, j *= 10)
		result += (s[i] - 48) * j;

	if (result != -2147483648)
		result *= num_of_minus % 2 == 1 ? -1 : 1;

	return (result);
}
