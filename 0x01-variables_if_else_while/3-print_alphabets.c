#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
*/
int main (void)
{
	char letter = 'a';
	char letter2 = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
	}

	while (letter2 <= 'Z')
	{
		putchar(letter2);
	}

	putchar('\n')

	return (0);
}
