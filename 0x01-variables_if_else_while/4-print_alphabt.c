#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints the alphabet using putchar commands
*
* Return: returns successfully a 0 upon completion
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch == 'e' || ch == 'q')
{
continue;
}
putchar (ch);
}
putchar ('\n');
return (0);
