#include "main.h"
/**
 * _isalpha - here we will check for alphabet characters
 * @c: this is ASCII character
 * Return: 0 if not alphabet, else 1 if alphabet
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
