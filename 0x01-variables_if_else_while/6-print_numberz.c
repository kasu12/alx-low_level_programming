#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succcess)
*/
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar((char)num);
		num++;
	}
	putchar('\n');
	return (0);
}

