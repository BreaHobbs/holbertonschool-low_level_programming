#include "holberton.h"
/**
* puts2 - Write a function that returns the length of a string.
* @p: takes input into function
* Return: returns successfully a 0 upon completion
*/
void puts2(char *str)
{
	int i = 0;

for(i = 0; i < _strlen(str); i += 2)
{
   _putchar(str[i]);
}
_putchar('\n');
}
/**
* _strlen - Write a function that returns the length of a string.
* @p: takes input into function
* Return: returns successfully a 0 upon completion
*/
int _strlen(char *p)
{
        unsigned int count = 0;

        while (*p != '\0')
        {
                count++;
                p++;
        }
        return (count);
}
