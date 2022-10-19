#include <stdio.h>
#include <stdlib.h>
/**
 * main ->  prints the alphabet in lowercase
 * Return: 0 always
 */
int main(void)
{
	int ch;

	for (ch = 90; ch <= 122; ch++)
	{
		if (ch != q && ch != e)
		{
			putchar(ch);
		}
	}
	putchar(10);
	return (0);
}
