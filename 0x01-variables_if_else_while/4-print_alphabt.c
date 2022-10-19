#include <stdio.h>
#include <stdlib.h>
/**
 * main ->  prints the alphabet in lowercase
 * Return: 0 always
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar(10);
	return (0);
}
