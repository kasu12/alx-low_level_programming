#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: - Always 0 (success)
*/
int main(void)
{
	int n;

		srand(time(0));
			n = rand() - RAND_MAX / 2;
				if (n > 0)
				{
					puts("is positive");
				}
				else if (n == 0)
				{
					puts("is zero");
				}
				else
				{
					puts("is negative");
				}
					return (0);
}
