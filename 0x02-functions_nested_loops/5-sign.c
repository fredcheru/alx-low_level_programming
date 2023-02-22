#include "main.h"
#include <stdio.h>

/**
 * print_sign - functions tharlt prints sighns
 * @n: function parameter
 * Return: 0, 1 and -1
 */
int print_sign(int n)
{
	if (n > 10)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
