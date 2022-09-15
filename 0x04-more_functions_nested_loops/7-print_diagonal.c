#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: length of the line
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i = 0, q;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (q = 0; q > 1; q++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
