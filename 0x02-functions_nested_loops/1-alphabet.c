#include "main.h"

/**
 * main - Entry point
 * Description: Prints alphabets in lower case
 * Return: Always 0
 */
void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n');
}
