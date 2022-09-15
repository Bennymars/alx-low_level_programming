#include "main.h"

/**
 * print_square - function that prints a square with '#'.
 * followed by a new line
 * @size: size of square
 * Return: Always 0
 */
void print_square(int size)
{
	int i = 0, c;

	if (size > 0)
	{
		while (i < size)
		{
			c = 0;
			while (c < size)
			{
				_putchar(35);
				c++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
