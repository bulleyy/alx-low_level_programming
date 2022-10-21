#include "main.h"
/**
 * main -> prints the alphabet, in lowercase
 * Return: 0 always
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	return (0);
}
