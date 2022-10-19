#include <stdio.h>
#include <stdlib.h>
/**
 * main -> prints all single digit numbers of base 10 starting from 0
 * Return: 0 always
 */
int main(void)
{
	int ch;

	for (ch = 48; ch < 57; ch++)
	{
		putchar("%d", ch);
	}
	putchar(10);
	return (0);
}
