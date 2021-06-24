#include <stdio.h>
/**
* main - Prints string to stderr using fwrite
*
* Return: returns successfully a 1 upon completion
*/
int main(void)
{
fwrite("and that piece of art is useful\"", 32, 1, stderr);
fwrite("- Dora Korpar, 2015-10-19\n", 27, 1, stderr);
return (0);
}
