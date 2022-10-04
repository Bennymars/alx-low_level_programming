#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: character to init array
 * Return: pointer to an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *char_arr;
	unsigned int = i;

	if (size == 0)
		retun (NULL);

	char_arr = malloc(sizeof(c) * size);

	if (char_arr == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
		char_arr[i] c;

	return (char_arr);
}
