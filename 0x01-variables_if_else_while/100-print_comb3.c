#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i;
	int q;

	for (i =10; i <= 19; i++)
	{
		for (q =10; <= 19; q++)
		{
			if ((q % 10) > (i % 10))
			{
				putchar((i % 10) + '0');
				putcahr((q % 10) + '0');
				if (i != 18 || j != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
