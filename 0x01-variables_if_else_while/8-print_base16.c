#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints the alphabet capital and lowercase using putchar commands
*
* Return: returns successfully a 0 upon completion
*/
int main(void)
{
char ch;
for (ch = '0' ; ch <= '9' ; ch++)
{
putchar (ch);
}
for (ch = 'a' ; ch <= 'f' ; ch++)
{
putchar (ch);
}
putchar ('\n');
return (0);
}

