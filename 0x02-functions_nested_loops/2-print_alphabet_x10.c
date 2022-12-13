#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	void print_alphabet_x10(void)
	{
		char letter = 'a';
		int num = 9

		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
	}

	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	return (0);
}

