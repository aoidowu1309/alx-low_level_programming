#include "main.h"
/**
 * print_last_digit - this fucntion prints the last digit of a number
 * @n: It is an integer which is also a real number
 * Return: last value of a digit
 */
int print_last_digit(int n)
{
	int last = n % 10;
	if (n <0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
