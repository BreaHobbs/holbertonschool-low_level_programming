include "holberton.h"
/**
* _strlen - Write a function that returns the length of a string.
* @count: takes in input into function
* Return: returns successfully a 0 upon completion
*/
int _strlen(char *p)
{
    unsigned int count = 0;

    while(*p!='\0')
    {
        count++;
        p++;
    }
    return count;
}
