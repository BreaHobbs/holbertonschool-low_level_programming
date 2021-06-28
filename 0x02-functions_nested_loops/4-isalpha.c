#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* _isalpha - function checks for alphabetic character
* @c: takes in input into function
* Return: returns successfully a 0 upon completion
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
