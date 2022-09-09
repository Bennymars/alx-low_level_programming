#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k, j, i;

	for (k = '0'; k <= '9'; k++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (i = '0'; i <= '9'; i++)
			{
				if (k < j && j < i)
				{
					putchar(k);
					putchar(j);
					putchar(i);

					if (k != '6')
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
