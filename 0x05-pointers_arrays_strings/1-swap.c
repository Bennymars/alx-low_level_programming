#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer pointer input 1
 * @b: integer pointer input 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int pin = *a;

	*a = *b;
	*b = pin;
}
