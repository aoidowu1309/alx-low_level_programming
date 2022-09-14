#include "main.h"
/**
 * print_sign - function checks for negative, positive or 0 integers
 * @n: this is a number sign
 * Return: 0 if Zero, 1 if > 0 and -1 if < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar ('0');
	return (0);
}
