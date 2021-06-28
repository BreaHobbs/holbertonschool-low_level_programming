#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* int _islower(int c); - function checks for lowercase character
* 
* Return: returns successfully a 0 upon completion
*/
int _islower(int c)
{
	int a;

	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	return (0);
}
