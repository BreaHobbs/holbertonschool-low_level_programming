#include <string.h>
#include "holberton.h"
/**
* print_last_digit - function checks for lowercase character
* @x: takes in input into function
* Return: returns successfully a 0 upon completion
*/
void print_rev(char *s)
{
int length, c;
   char *begin, *end, temp;
 
   length = _strlen(s);
   begin  = s;
   end    = s;
 
   for (c = 0; c < length - 1; c++)
      end++;
 
   for (c = 0; c < length/2; c++)
   {        
      temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
}
