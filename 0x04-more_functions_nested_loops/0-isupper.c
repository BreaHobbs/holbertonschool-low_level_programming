#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _isupper- checks for uppercase character
 * @c: integer
 * Return: largest number
 */
int _isupper(int c)
{
	if (c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c < 'z')
	{
		return (0);
	}
	else
		return (-1);
}
