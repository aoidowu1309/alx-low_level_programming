#include "main.h"
/**
 * _abs - This compute the absoute value of integer passed
 * @n: this is an integer and it is a real number
 * Return: Absolute Value
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (n * -1);
	else
		return (0);
}
