#include "holberton.h"
/**
* print_last_digit - function checks for lowercase character
* @x: takes in input into function
* Return: returns successfully a 0 upon completion
*/
int print_last_digit(int x)
{
	x = x % 10;
	_putchar(x);
return (x);
}
