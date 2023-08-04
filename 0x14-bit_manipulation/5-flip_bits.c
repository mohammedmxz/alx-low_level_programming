#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Flips bits to convert one number to another number.
 * @n: The first number.
 * @m: The second number to convert to.
 * Return: The number of bits that were needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
