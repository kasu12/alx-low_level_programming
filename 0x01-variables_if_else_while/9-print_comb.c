#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar((char)num);
		if (num == 9)
			break;
		putchar(',');
		putchar(' ');
		num++;
	}

	putchar('\n');
	return (0);
}
