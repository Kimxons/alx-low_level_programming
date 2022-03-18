#include "main.h"

/**
 * _isupper - function to check uppercase character
 * @c: input charater
 * Return: 1 if the input character is uppercase or 0 otherwise
 */

/* function prototype*/
int _isupper(int c)
{
    //char i;
    char uppercase = 'A';
    int isupper = 0;

   // for (i = 'A'; i <= 'Z'; i++)
   for (; uppercase <='Z'; uppercase++)
    {
        if (c == uppercase)
        {
            isupper = 1;
            break;
        }
    }
    return (isupper);
}
