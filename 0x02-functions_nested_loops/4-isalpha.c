#include "main.h"
/**
 * _isalpha - parameter for checking alphabets
 * @c: parameter to be checked
 * Return: 0 if is an alphabet
 * and 1 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
