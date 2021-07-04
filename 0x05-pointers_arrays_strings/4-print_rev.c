#include <string.h>
#include "holberton.h"
/**
* print_rev - Write a function that prints a string in reverse
* @s: takes in input into function
* Return: returns successfully a 0 upon completion
*/
void print_rev(char *head)
{
	char *tail = head;
	
	if (!head) return;
  
	while(*tail) ++tail;    // find the 0 terminator, like head+strlen

	--tail;               // tail points to the last real char
                        // head still points to the first
  for( ; head < tail; ++head, --tail) {
      // walk pointers inwards until they meet or cross in the middle
      char h = *head, t = *tail;
      *head = t;           // swapping as we go
      *tail = h;


}
}
