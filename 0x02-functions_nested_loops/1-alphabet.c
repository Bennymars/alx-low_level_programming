#include "main.h"

/**
 * main - Entry point
 *
 * Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z';)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
