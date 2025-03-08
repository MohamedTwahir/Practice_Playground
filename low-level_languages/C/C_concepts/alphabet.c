#include <stdio.h>
/**
 * print_alphabet - function that prints alphabet in lowercase, followed by a new line.
 */

 void print_alphabet(void){

    char a;

    for (a = 'a'; a <= 'z'; a++)
    {
        putchar(a);
        
    }
    putchar('\n');

 }
