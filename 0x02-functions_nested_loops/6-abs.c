#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* _abs - a function that computes the absolute value of an integer.
* @c: takes in input into function
* Return: returns successfully a 0 upon completion
*/
int _abs(c)
{
	if (c >= 0)
		_putchar(c);
	else if (c < 0)
		_putchar(-c);
}
