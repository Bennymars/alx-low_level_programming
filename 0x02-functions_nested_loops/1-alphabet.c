#include "main.h"

/**
 * main - Entry point
 * Description: Prints alphabets in lower case
 * Return: Always 0
 */
void print_alphabet(void)
{
	char minuscule = 'a';

	while (minuscule <= 'z')
	{
		_putchar(minuscule);
		minuscule++;
	}
	_putchar('\n');
}
