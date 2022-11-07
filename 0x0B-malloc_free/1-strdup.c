#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*_strdup - returns a pointer to a newly allocated space in memory
*@str: string given as a parameter
*Return:  pointer to the duplicated string or NULL
*/

char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	ptr = (char *)malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
		return (ptr);
	for (j = 0; j <= i; ++j)
		ptr[j] = str[j];
	return (ptr);
}
