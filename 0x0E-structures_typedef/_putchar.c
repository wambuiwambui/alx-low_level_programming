#include <unistd.h>

/**
* _putchar - wrtes the character c to stdout
* @c: character to print
*
* Return: On success 1.
* on error: -1 is returned, error is set approprately.
*/
int _putchar(char c)
{
return(write(1 , &c , 1));
}
