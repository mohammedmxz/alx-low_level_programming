#include <stdio.h>

void first(void) __attribute__ ((constructor));
/**
 * first - Function with the constructor attribute.
 *
 * This function is executed automatically before the main function is called.
 * It prints two sentences.
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
