#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i, q, p;

	for (i = 0; i <= 9; i++)
	{
		for (q = 0; q <= 9; q++)
		{
			for (p = 0; p <= 9; p++)
			{
				if (p > q && q > i)
				{
					putchar(i + '0');
					putchar(q + '0');
					putchar(p + '0');
					if (i != 7 || q != 8 || p != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
