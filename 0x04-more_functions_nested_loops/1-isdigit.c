#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _isdigit - Write a function that checks for a digit (0 through 9).
 * @c: integer
 * Return: 1 if digit, 0 if not a digit
 */
int _isdigit(int c)
{
	if (c < 58 && c > 47)
		return (1);
	else
		return (0);

}
