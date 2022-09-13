#include "main.h"

/**
 * main - Entry poin
 * Description: _isalpha - checks for alphabetic character
 * @c: the integer value it receives
 *
 * Return: 1 or 0 if otherwise
 */


int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
