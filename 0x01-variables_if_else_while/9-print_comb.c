#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar((char)num);
		if (num == 57)
			break;
		putchar(',');
		putchar(' ');
		num++;
	}

	putchar('\n');
	return (0);
}
