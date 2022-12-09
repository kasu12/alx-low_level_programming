#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'z')
			continue;
		putchar(letter);
		putchar('\n');
	}

}
