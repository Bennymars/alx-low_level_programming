#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int b;
	int m;

	for (b = 0; b <= 99; b++)
	{
		for (m = b + 1; m <= 99; m++)
		{
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			putchar(' ');
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');

			if (!(b == 98 && m == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

