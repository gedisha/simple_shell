#include "shell.h"
/**
* readCommand Function to take users input
*
* Return: return number of characters read from the standard input
*/
int readCommand (void)
{
        size_t n = 0;
        char *buff = NULL;
        int size;
        size = getline (&buff, &n, stdin);
        return (size);
}
