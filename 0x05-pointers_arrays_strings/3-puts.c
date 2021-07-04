#include "holberton.h"
/**
* _puts - function checks for lowercase character
* @str: takes in input into function
* Return: returns successfully a 0 upon completion
*/
void _puts(char *str)
{
char c = '\0';

while ((c = *str++))
	_putchar(c);
	_putchar('\n');


}
