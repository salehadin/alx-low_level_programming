#include "main.h"
/**
 * _islower - cheks if a character is lower case
 * @c: the character
 * Return: 1 if letter is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
