#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'z')
			continue;
		putchar(letter);
		putchar('\n');
		letter++;
	}

	return (0);

}
