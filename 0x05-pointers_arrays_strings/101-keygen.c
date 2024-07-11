#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - a program that generates random valid passwords for the
 * program 101-crackme.
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char password[29] = "dddddddddddddddddddddddddddd";

	srand(time(NULL));
	i = rand() % 27;
	password[i] = 'H';
	printf("%s", password);

	return (0);
}
