#include "main.h"
/**
 * _islower - function print lowercase
 * @c: parameter for printing
 * Return: 1 if is lowercase
 * and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
