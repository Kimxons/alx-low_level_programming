#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * You can only use _putchar function to print
 * where n is the number of times the character \ should be printed
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 */

 void print_diagonal(int n)
 {
     int i, j;   

     if(n > 0)
     {
         for(i = 0; i < n; i++)
         {
             for (j = 0; j < i; j++)
                 _putchar(' ');
         _putchar(92);
         _putchar('\n');
         }
     }
     else
         _putchar('\n');
 }
