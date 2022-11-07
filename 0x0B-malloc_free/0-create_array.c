#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*create_array - creates an array of chars, and initializes it with a char
*@size: required size
*@c: specific char
*Return: pointer to the array or null
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
