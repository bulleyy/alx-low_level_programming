#include <stdio.h>
#include <stdlib.h>
/**
 * main ->  prints the alphabet in lowercase, and then in uppercase
 * Return: 0 always
 */
int main(void)
{
	int ch;

	for (ch = 92; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
