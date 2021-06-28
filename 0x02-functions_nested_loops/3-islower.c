#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* _islower - function checks for lowercase character
* @c: takes in input into function
* Return: returns successfully a 0 upon completion
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	return (0);
}
